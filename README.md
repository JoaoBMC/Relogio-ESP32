![image](https://github.com/JoaoBMC/Relogio-ESP32/assets/64325336/55e5d3cf-e2a8-49a9-869b-da81bdc58999)
# Projeto Relógio-ESP32
- Este é o #2 projeto de uma série de estudos de programação [PRJT-8].

### Como Executar
Este projeto foi simulado no [Wi](https://wokwi.com/). Para simular lá, basta copiar o conteúdo do [diagram.ja](https://github.com/JoaoBMC/Semaforo-ESP32/blob/main/diagram.json) para o arquivo diagram.json no site e copiar o código [src/main.cpp](https://github.com/JoaoBMC/Semaforo-ESP32/blob/main/src/main.cpp) para o arquivo main.cpp no [Wi](https://wokwi.com/).

# Descrição

Este projeto tem como objetivo criar uma simulação de um relógio digital com função de alarme. Ele utiliza um microcontrolador ESP32, um display OLED, um RTC (relógio em tempo real), um encoder e um buzzer.

## Funcionalidades

### Relógio

O relógio digital exibe horas, minutos e segundos (no formato HH:MM:SS), permitindo que o usuário configure esses parâmetros usando o encoder. Isso proporciona uma personalização completa do relógio de acordo com as preferências individuais.

### Alarme

O alarme é uma função adicional que pode ser configurada pelo usuário. Quando a hora e o minuto do relógio coincidem com a hora e o minuto definidos pelo usuário para o alarme, o buzzer é ativado, emitindo um som audível para alertar sobre o horário específico.

O alarme pode ser ativado e desativado segurando o botão por 1 segundo seguido de um sinal sonoro.

### Modo de Configuração

#### Configuração do Relógio

Para configurar o relógio:

1. Pressione e segure o botão por 3 segundos na tela principal.
2. Ajuste as horas girando o encoder para cima ou para baixo.
3. Clique no botão do encoder para configurar os minutos e ajuste-os com o encoder.
4. Finalize clicando novamente no botão.

#### Configuração do Alarme

Para configurar o alarme:

1. Na tela principal, clique uma vez para alternar para a tela de alarme.
2. Pressione e segure o botão por 3 segundos para entrar no modo de edição do alarme.
3. Ajuste as horas do alarme girando o encoder para cima ou para baixo.
4. Clique no botão do encoder para configurar os minutos do alarme e ajuste-os com o encoder.
5. Finalize clicando novamente no botão.

## Material

- ESP32
- Display OLED
- RTC DS1307
- Encoder
- Buzzer

## Requisitos

### Requisitos Funcionais:

1. **Exibição de Horas, Minutos e Segundos:**
   - O relógio digital deve exibir as horas, minutos e segundos no formato HH:MM:SS.
   
2. **Configuração do Relógio:**
   - O usuário deve poder configurar as horas e minutos do relógio.
   - A configuração das horas deve ser realizada pressionando e segurando o botão por 3 segundos na tela principal.
   - O ajuste das horas deve ser possível girando o encoder para cima ou para baixo.
   - O usuário deve poder confirmar a configuração das horas clicando no botão do encoder.
   - Após configurar as horas, o usuário deve poder configurar os minutos seguindo um processo semelhante.
   
3. **Ativação e Desativação do Alarme:**
   - O usuário deve poder ativar e desativar o alarme.
   - O alarme pode ser ativado segurando o botão por 1 segundo, seguido de um sinal sonoro indicativo.
   - O alarme pode ser desativado seguindo o mesmo procedimento de ativação.
   
4. **Ativação do Alarme:**
   - O alarme deve ser ativado quando a hora e o minuto do relógio coincidirem com a hora e o minuto configurados para o alarme.
   - A ativação do alarme deve acionar o buzzer, emitindo um som audível para alertar sobre o horário específico.

### Requisitos Não Funcionais:

1. **Usabilidade:**
   - O sistema deve ser intuitivo e de fácil utilização, permitindo que o usuário configure o relógio e o alarme sem dificuldades.
   
2. **Eficiência:**
   - O sistema deve ser eficiente em termos de consumo de energia, garantindo uma vida útil adequada da bateria ou fonte de alimentação.
   
3. **Confiabilidade:**
   - O relógio e o alarme devem ser confiáveis, garantindo que as configurações sejam mantidas e que o alarme seja ativado corretamente quando necessário.
   
4. **Precisão Temporal:**
   - O relógio deve ser preciso em termos de manter o tempo correto, utilizando o RTC para garantir a precisão mesmo em longos períodos de funcionamento.
   
5. **Robustez:**
   - O sistema deve ser robusto o suficiente para lidar com possíveis falhas de entrada do usuário ou condições adversas de funcionamento, garantindo uma operação estável e contínua.

## Esquemático

![Esquemático]![image](https://github.com/JoaoBMC/Relogio-ESP32/assets/64325336/c94bc414-ce17-4b3e-a2a9-8bb9ab71d72d)


| Componente | GPIO |
| --- | --- |
| BUZZER  | 5 |
| RTC (SDA) | 21 |
| RTC (SLC) | 22 |
| OLED (SDA) | 21 |
| OLED (SLC) | 22 |
| ENCODER (A) | 18 |
| ENCODER (B) | 19 |
| ENCODER (SW) | 23 |
