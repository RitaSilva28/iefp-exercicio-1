#include <stdio.h>
#include <math.h>

int main(void) {
    
    printf("EXERCÍCIOS SEQUÊNCIAS\n\n");
    
    // Exercicio 1
    
    printf("EXERCICIO 1 \n");
   
     printf("Alo mundo\n\n");
    
    //Exercicio 2
    
    printf("EXERCICIO 2 \n");
    
    int numeroInformado;
       
       printf("Qual é o número? \n");
       scanf("%d", &numeroInformado);
       printf("O número informado é: %d \n\n", numeroInformado);
    
    
    //Exercicio 3
    
    printf("EXERCICIO 3 \n");
    
     int n1;
     int n2;
     int soma;
     
     printf("Qual é o primeiro número? \n");
     scanf("%d", &n1);
     printf("Qual é o segundo número? \n");
     scanf("%d", &n2);
     
     soma=n1+n2;
     
     printf("A soma dos dois números é %d \n\n", soma);
    
    //Exercicio 4
    
    printf("EXERCICIO 4 \n");
    
    float nota1, nota2, nota3, nota4, media;
        
        printf("Qual é a sua primeira nota?\n");
        scanf("%f", &nota1);
        printf("Qual é a sua segunda nota?\n");
        scanf("%f", &nota2);
        printf("Qual é a sua terceira nota?\n");
        scanf("%f", &nota3);
        printf("Qual é a sua quarta nota?\n");
        scanf("%f", &nota4);
        
        media=(nota1+nota2+nota3+nota4)/4;
        
        printf("A sua média é %.1f \n\n", media);

    
    // Exercicio 5
    
    printf("EXERCICIO 5 \n");
    
    float metros;
    int conversao;
    
    printf("Indique os metros\n");
    scanf("%f", &metros);
    
    conversao = metros*100;
    printf("%.2f metros são %d centímetros \n\n", metros, conversao);

  //Exercicio 6
    
    printf("EXERCICIO 6 \n");
    
    
    float raioCirculo;
    float areaCirculo;
    
    printf("Indique o raio do círculo \n");
    scanf("%f", &raioCirculo);
    
    areaCirculo= 3.1415926535898 * (raioCirculo*raioCirculo);
    
    printf("A área do círculo é: %.2f \n\n", areaCirculo);
    
    //Exercicio 7
      
    printf("EXERCICIO 7 \n");
    
    float ladoQuadrado, areaQuadrado, dobroAreaQuadrado;
       
       printf("Indique o lado do quadrado \n");
       
       scanf("%f", &ladoQuadrado);
       
       areaQuadrado=(ladoQuadrado*ladoQuadrado);
       dobroAreaQuadrado= areaQuadrado*2.0;
       
           printf("A área do quadrado é %.2f e", areaQuadrado);

       printf(" o dobro da área do quadrado é %.2f \n\n", dobroAreaQuadrado);
    
    
    //Exercicio 8
      
    printf("EXERCICIO 8 \n");
    
    float valorHora, valorDia, salarioMensal;
       printf("Indique quanto ganha por hora \n");
       scanf("%f", &valorHora);
       
       valorDia=valorHora*8.0;
       salarioMensal= valorDia*22;
       
       printf("O seu Salário Mensal são %.2f€ \n\n", salarioMensal );
    
    
    //Exercicio 9
      
    printf("EXERCICIO 9 \n");
    
    float temperaturaFarenheit;
      float temperaturaCelsius;
      
      
      printf("Por favor indique a temperatura em Farenheit \n");
      scanf("%f",&temperaturaFarenheit);
      
      temperaturaCelsius= 5*((temperaturaFarenheit-32)/9);
      
      printf("A temperatura é %.1f ºC \n\n", temperaturaCelsius);
    
    //Exercicio 10
      
    printf("EXERCICIO 10 \n");
    
    float temperatura_Celsius;
    float temperatura_Farenheit;
  
   printf("Indique a temperatura em Celsius \n");
   scanf("%f", &temperatura_Celsius);
   
   temperatura_Farenheit= (temperatura_Celsius*1.8)+32;
   
   printf("A temperatura é %.1f ºF \n\n", temperatura_Farenheit);
    
    //Exercicio 11
      
    printf("EXERCICIO 11 \n");
    
    
     int numeroInteiro1, numeroInteiro2, operacaoDobro;
     float numeroReal3, operacaoSoma, operacaoCubo;
     
     
     
     printf("Introduza o primeiro número inteiro: \n");
     scanf("%d", &numeroInteiro1);
     printf("Introduza o segundo número inteiro: \n");
     scanf("%d", &numeroInteiro2);
     printf("Introduza agora o número real: \n");
     scanf("%f", &numeroReal3);
     
     operacaoDobro=(numeroInteiro1*2)*(numeroInteiro2/2);
     operacaoSoma = (numeroInteiro1*3) + numeroReal3;
     operacaoCubo = numeroReal3*numeroReal3*numeroReal3;
     
     
     printf("O produto do dobro do primeiro número com metade do segundo é %d \n", operacaoDobro);
     printf("A soma do triplo do primeiro número com o terceiro é %.1f \n", operacaoSoma);
       printf("o terceiro número elevado ao cubo é: %.2f \n\n", operacaoCubo);

    
    //Exercicio 12
      
    printf("EXERCICIO 12 \n");
    
    float altura, pesoIdeal;
      
      printf("Introduza a sua altura em metros \n");
      scanf("%f", &altura);
      
      pesoIdeal=(72.7 * altura) - 58;
      
      printf("O seu peso ideal são %.1fkg \n\n", pesoIdeal);
      
    
    //Exercicio 13
      
    printf("EXERCICIO 13 \n");
    
    float _altura, pesoIdealMulher, pesoIdealHomen;
      
      printf("Introduza a sua altura em metros \n");
      scanf("%f", &_altura);
      
      pesoIdealMulher=(72.7 * _altura) - 58;
      pesoIdealHomen=(62.1 * _altura) - 44.7;
      
      printf("Se for mulher, o seu peso ideal são %.1fkg, se for homem o seu peso ideal são %.1fkg \n\n", pesoIdealMulher, pesoIdealHomen);
      
    
    //Exercicio 14
      
    printf("EXERCICIO 14 \n");
    
    
    float pesoPeixe, pesoExcesso, multa;
    
    printf("Quanto peso de peixe pescou?\n");
    scanf("%f", &pesoPeixe);
    
    printf("O peso que João pescou foi: %.1fkg \n", pesoPeixe);
    
    pesoExcesso=pesoPeixe-50.0;
    multa=pesoExcesso*4.00;
    
    if(pesoExcesso>0){
    printf("O João excedeu o peso em %.1fkg. O João tem de pagar %.2f€ a mais.\n\n", pesoExcesso, multa);};

if(pesoExcesso<=0){
    printf("O João não excedeu o peso. Não precisa de pagar nada \n\n");};
    
    //Exercicio 15
      
    printf("EXERCICIO 15 \n");
    
    float valor_Hora, horasTrabalhadas, salarioMensalBruto, valorImpostoRenda, valor_Inss, valorSindicato, salarioLiquido;
    
    printf("Indique quanto ganha por hora \n");
    scanf("%f", &valor_Hora);
    printf("Indique quantas horas trabalhou no mês \n");
    scanf("%f", &horasTrabalhadas);
    
    salarioMensalBruto= valor_Hora * horasTrabalhadas;
    valorImpostoRenda=salarioMensalBruto * 0.11;
    valor_Inss=salarioMensalBruto * 0.08;
    valorSindicato=salarioMensalBruto * 0.05;
    salarioLiquido= salarioMensalBruto - valorImpostoRenda - valor_Inss-valorSindicato;
    
    printf("O seu salário Bruto é: %.2f€ \n", salarioMensalBruto);
    printf("Pagou de Imposto de Renda: %.2f€ \n", valorImpostoRenda);
    printf("Pagou ao INSS: %.2f€ \n", valor_Inss);
    printf("Pagou ao Sindicato: %.2f€ \n", valorSindicato);
    printf("O seu Salário Líquido são: %.2f€ \n\n", salarioLiquido);
    
    
    //Exercicio 16

    printf("EXERCICIO 16 \n");
    
    float area, litros_Necessarios, latas_Necessarias, custo_Latas, lata_area;
    printf("Insira a área em m2 a ser pintada \n");
    scanf("%f",&area);
    
    lata_area=54;
    litros_Necessarios=area/3;
    
    latas_Necessarias= ceil(litros_Necessarios/18);
    custo_Latas=latas_Necessarias*80.00;
    
    printf("São precisas %.1f latas de tinta que vão custar R$%.2f \n\n", latas_Necessarias, custo_Latas);
    
    
    //Exercicio 17
      
    printf("EXERCICIO 17 \n");
    
    float area_2, litros_Necessarios_2, latas_Grandes, latas_Pequenas, custo_Latas_Grandes, custo_Latas_Pequenas, litros_Area_Lata_Grande, litros_Area_Lata_Pequena;
    
    litros_Area_Lata_Grande=108; // 6 m2 * 18 Litros
    litros_Area_Lata_Pequena=21.6; // 6 m2 * 3.6 Litros
    
    printf("Insira a área em m2 a ser pintada \n");
    scanf("%f",&area_2);
    
   
    litros_Necessarios_2=area_2/6;
    
    latas_Grandes= ceil(litros_Necessarios_2/18);
    latas_Pequenas=ceil(litros_Necessarios_2/3.6);
    custo_Latas_Grandes=latas_Grandes*80.00;
    custo_Latas_Pequenas=latas_Pequenas*25.00;
    
    printf("São precisas %.1f latas de tinta grandes que vão custar R$%.2f \n", latas_Grandes, custo_Latas_Grandes);
    printf("São precisas %.1f latas de tinta pequenas que vão custar R$%.2f \n\n", latas_Pequenas, custo_Latas_Pequenas);
    
    
    //Exercicio 18
      
    printf("EXERCICIO 18 \n");
    
    float megaByte, megaBit,  tempo_Segundos,velocidade_Internet, tempo_Minutos;
    
 
    
    printf("Quantos MB tem o Ficheiro? \n");
    scanf("%f", &megaByte);
    printf("Qual é a sua velocidade de internet?\n");
    scanf("%f",&velocidade_Internet);
    
    megaBit=megaByte/0.125;
    tempo_Segundos=megaBit/velocidade_Internet;
    tempo_Minutos=tempo_Segundos/60;
    
    printf("O download vai demorar cerca de %.3f minutos \n\n", tempo_Minutos);
     
    
     return 0;
}
