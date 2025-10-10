#include <stdio.h>
#include <stdlib.h>

/*
Lista 4
Operadores matemáticos e variáveis 2
Autor: Vinicius Ribas Bida
RA: 25070323
Data: 05/04/2025
*/

int main()
{
/*
Exercicio 1
float preco, desconto, novoPreco;

printf("Digite o valor do produto: R$");
scanf("%f", &preco);

desconto = preco * 0.09;
novoPreco = preco - desconto;

printf("O valor do desconto e: R$%f\n", desconto);
printf("O valor do produto com desconto e: R$%f", novoPreco);


Exercicio 2
float valorHora, INSS, descontoINSS, salarioLiquido, salarioBruto;
int aulas;

printf("Digite o valor da hora aula: R$");
scanf("%f", &valorHora);

printf("Digite a quantidade de aulas dadas no mes:");
scanf("%d", &aulas);

printf("Digite o percentual de desconto do INSS:");
scanf("%f", &INSS);

salarioBruto = aulas * valorHora;
descontoINSS = salarioBruto * (INSS/100);
salarioLiquido = salarioBruto - descontoINSS;

printf("O salario bruto e: R$%f\n", salarioBruto);
printf("Desconto do INSS: R$%f\n", descontoINSS);
printf("O salario liquido e: R$%f", salarioLiquido);


Exercicio 3
int celsius, fahrenheit;

printf("Digite a temperatura em celsius:");
scanf("%d", &celsius);

fahrenheit = ((9 * celsius) + 160)/5;

printf("A temperatura em Fahrenheit e: %d", fahrenheit);


Exercicio 4
float raio, altura, volume;

printf("Digite o raio da lata de oleo em centimetros: ");
scanf("%f", &raio);

printf("Digite a altura da lata em centimetros: ");
scanf("%f", &altura);

volume = 3.14159 * raio * raio * altura;

printf("O volume da lata e: %f cm", volume);


Exercicio 5
float fracao, numerador, denominador;

printf("Digite o numerador: ");
scanf("%d", &numerador);

printf("Digite o denominador: ");
scanf("%d", &denominador);

if (denominador != 0) {
    fracao = numerador / denominador;
    printf("O numero racional equivalente e: %f\n", fracao);
} else {
    printf("Erro: o denominador não pode ser zero");
}


Exercicio 6
float conta, gorjeta, contaNova;

printf("Digite o valor da conta: R$");
scanf("%f", &conta);

gorjeta = conta * 0.1;
contaNova = conta + gorjeta;

printf("A conta com gorjeta fica: R$%.2f", contaNova);


Exercicio 7
int hora, minuto, total;

printf("Digite o horario usando \"hh:mm\"");
scanf("%d:%d", &hora, &minuto);

total = hora * 60 + minuto;

printf("Ja se passaram %d minutos desde o inicio do dia", total);


Exercicio 8
int hora, minuto, totalMin, totalSeg;

printf("Digite o horario usando \"hh:mm\"");
scanf("%d:%d", &hora, &minuto);

totalMin = hora * 60 + minuto;
totalSeg = totalMin * 60;

printf("Ja se passaram %d segundos desde o inicio do dia", totalSeg);


Exercicio 9
float deposito, taxa, rendimentoMes, rendimentoAno, totalMes, totalAno;

printf("Digite o valor do deposito: R$");
scanf("%f", &deposito);

printf("Digite o valor da taxa em %:");
scanf("%f", &taxa);

rendimentoMes = deposito * taxa/100;
totalMes = deposito + rendimentoMes;

rendimentoAno = rendimentoMes * 12;
totalAno = deposito + rendimentoAno;

printf("O rendimento mensal e de: R$%f\n", rendimentoMes);
printf("O valor total apos um mes e de: R$%f\n", totalMes);

printf("O rendimento anual e de: R$%f\n", rendimentoAno);
printf("O valor total apos um ano e de: R$%f\n", totalAno);


Exercicio 10
int salarioMinimo, quantidadeDeSalarios;
float salario;

salarioMinimo = 1525;

printf("Digite seu salario: R$");
scanf("%f", &salario);

quantidadeDeSalarios = (int)salario/salarioMinimo;

printf("O seu salario e equivalente a %d salarios minimos", quantidadeDeSalarios);


Exercicio 11
float distancia, velocidadeMedia, litros;
int tempo;

printf("Insira a velocidade media em km/h:");
scanf("%f", &velocidadeMedia);

printf("Insira o tempo em horas de viagem:");
scanf("%d", &tempo);

distancia = tempo * velocidadeMedia;
litros = distancia/12;

printf("A distancia percorrida foi de %f e foram gastos %f litros de gasolina", distancia, litros);


Exercicio 12
float salarioMinimo, quilowatt, pagamento, pagamentoComDesconto, energia;

printf("Digite o valor do salario minimo: R$");
scanf("%f",&salarioMinimo);

printf("Digite o consumo de energia em quilowatts:");
scanf("%f", &energia);

quilowatt = (salarioMinimo/7)/100;
pagamento = quilowatt * energia;
pagamentoComDesconto = pagamento * 0.9;

printf("Preco de cada quilowatt: R$%f\n", quilowatt);
printf("Valor da conta: R$%f\n", pagamento);
printf("Valor da conta com 10%% de desconto: R$%f", pagamentoComDesconto);
*/




return 0;
}
