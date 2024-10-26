# Lista de Exercícios em C

Abaixo estão listados os exercícios propostos para prática em C, incluindo descrições e exemplos.

## Exercícios

1. **Conversão de Metros**  
   Fazer um programa que solicita um valor em metros e imprime o correspondente em decímetros, centímetros e milímetros.

2. **Conversão de Tempo**  
   Fazer um programa que solicita do usuário um tempo em segundos e calcula o equivalente em horas, minutos e segundos.

3. **Média de Números**  
   Solicitar ao usuário informar 6 números e calcular:
   - A média dos 3 primeiros informados.
   - A média dos 3 últimos informados.
   - A soma das médias.

4. **Sucessor e Antecessor**  
   Fazer um programa que solicita um número inteiro e apresenta na tela seu sucessor e antecessor.

5. **Consumo de Combustível**  
   Com base em um desempenho de 15km/L, fazer um programa que solicita o tempo de viagem em horas e a velocidade média em Km/h e calcula o consumo de combustível na viagem.

6. **Quantidade de Lâmpadas**  
   Fazer um programa para calcular a quantidade de lâmpadas de 60 watts necessárias para um cômodo, considerando 15 watts/m².

7. **Salário Líquido do Professor**  
   Calcular o salário líquido de um professor. O usuário deve informar o valor da hora/aula, o número de aulas e o percentual de desconto do INSS.

8. **Trajetória Parabólica**  
   Fazer um programa para calcular a trajetória de um projétil com base na velocidade inicial e o ângulo de lançamento, considerando a gravidade de 9,81 m/s².

9. **Maior entre Dois Números**  
   Ler dois números inteiros e informar qual é o maior ou se são iguais.

10. **Divisibilidade entre Dois Números**  
    Ler dois números inteiros A e B e informar se A é divisível por B.

11. **Comparação de Soma**  
    Receber três valores (X, Y, Z) e informar se a soma de X + Y é menor, maior ou igual a Z.

12. **Cálculo de Multa por Excesso de Velocidade**  
    Receber a velocidade máxima permitida e a velocidade do motorista e calcular a multa (R$5,00 por km/h acima da velocidade permitida).

13. **Cálculo de Salário Semanal**  
    Calcular o salário semanal de um trabalhador, com acréscimos para horas extras (50% para 40-60h, e 100% acima de 60h).

14. **Bolão de Futebol**  
    Zeca organiza um bolão onde os apostadores ganham pontos conforme suas apostas. A tabela a seguir exemplifica a pontuação:

    | Placar Apostado | Pontos | Razão                                                                              |
    |-----------------|--------|------------------------------------------------------------------------------------|
    | 0 x 1           | 0      | Não acertou o vencedor e nem o número de gols dos times.                           |
    | 0 x 2           | 5      | Não acertou o vencedor, mas acertou o número de gols do segundo time.              |
    | 3 x 5           | 5      | Não acertou o vencedor, mas acertou o número de gols do primeiro time.             |
    | 1 x 0           | 10     | Acertou o vencedor, mas não acertou o número de gols dos times.                    |
    | 3 x 1           | 15     | Acertou o vencedor e o número de gols do primeiro time.                            |
    | 3 x 2           | 20     | Acertou o vencedor e o número de gols de ambos os times.                           |

15. **Pontuação no Bolão**  
    Fazer um programa que recebe o placar apostado e o placar real e informa quantos pontos o apostador fez.

16. **Cálculo do IMC**  
    Calcular o Índice de Massa Corporal (IMC) e indicar a condição do usuário conforme a tabela:

    | IMC                  | Condição         |
    |----------------------|------------------|
    | Abaixo de 18,5      | Abaixo do peso   |
    | Entre 18,5 e 25     | Peso normal      |
    | Entre 25 e 30       | Acima do peso    |
    | Acima de 30         | Obeso            |

17. **Cálculo de Peso Ideal**  
    Receber a altura e o sexo do usuário e calcular o peso ideal:
    - Para homens: `(72.7 * altura) - 58`
    - Para mulheres: `(62.1 * altura) - 44.7`
