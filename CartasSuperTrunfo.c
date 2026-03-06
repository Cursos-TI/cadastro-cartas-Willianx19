#include <stdio.h>

int main(){

// Variáveis da Carta 01
int Pontos1;
char Estado1,Codigo1[10],Nome_ci1[20];
float Area1,Pib1,densidade1,pibper1;
float superpoer1;
unsigned long int Populacao1;

// Printf e scanf da Carta 01
printf("Digite os requisitos da carta 01: \n");

printf("Digite o Estado: \n");
scanf(" %c",&Estado1);

printf("Digite o código: \n");
scanf("%s",&Codigo1);

printf("Digite o nome da cidade: \n");
scanf("%s",&Nome_ci1);

printf("Digite a população: \n");
scanf("%u",&Populacao1);

printf("Digite a área: \n");
scanf("%f",&Area1);

printf("Digite o pib: \n");
scanf("%f",&Pib1);

printf("Digite o números de pontos turísticos: \n");
scanf("%d",&Pontos1);

// Calculo da Densidade e população e super poder
densidade1= (float) Populacao1 / Area1;
pibper1= (float) Pib1 / Populacao1;
superpoer1= (float) + Area1 + Pib1 + pibper1 + densidade1 + Pontos1;

// Sequencia de printf para mostrar a carta 01
printf("Carta 01:\n");
printf("Estado:%c\n",Estado1);
printf("Código:%s\n",Codigo1);
printf("Digite o nome da cidade: %s\n",Nome_ci1);
printf("População:%u\n",Populacao1);
printf("Área:%f Km\n",Area1);
printf("Pib:%f Bilhões de reais\n",Pib1);
printf("Pontos Turísticos:%d\n",Pontos1);
printf("Densidade populacional:%f hab/km\n",densidade1);
printf("Pib per capita: %f reais",pibper1);

// Variáveis da Carta 02
int Pontos2;
char Estado2,Codigo2[10],Nome_ci2[20];
float Area2,Pib2,densidade2,pibper2,superpoer2;
unsigned long int Populacao2;
int resultado1,resultado2,resultado3,resultado4,resultado5,resultado6,resultado7;


// Printf e scanf da Carta 02
printf("Digite os requisitos da carta 02:\n");

printf("Digite o Estado: \n");
scanf(" %c",&Estado2);

printf("Digite o Código da carta: \n");
scanf("%s",&Codigo2);

printf("Digite o nome da cidade: \n");
scanf("%s",&Nome_ci2);

printf("Digite a População: \n ");
scanf("%u",&Populacao2);

printf("Digite a Área:\n");
scanf("%f",&Area2);

printf("Digite o Pib: \n");
scanf("%f",&Pib2);

printf("Digite os número de Pontos Turísticos: \n");
scanf("%d",&Pontos2);

// Calculo da Densidade e população e super poder
densidade1= (float) Populacao2 / Area2;
pibper1= (float) Pib2 / Populacao2;
superpoer2= Populacao2 + Area2 + Pib2 + pibper2 + densidade2 + Pontos2;


// Sequencia de printf para mostrar a carta 02
printf("Carta 02: \n");
printf("Estado:%c\n",Estado2);
printf("Código:%s\n",Codigo2);
printf("Digite o nome da cidade: %s\n",Nome_ci2);
printf("População:%u\n",Populacao2);
printf("Área:%f Km\n",Area2);
printf("Pib:%f Bilhões de reais\n",Pib2);
printf("Pontos Turísticos:%d\n",Pontos2);
printf("Densidade populacional:%f hab/km\n",densidade2);
printf("Pib per capita: %f reais\n",pibper2);

// Comparação entre as Cartas
resultado1= Populacao1 > Populacao2;
resultado2= Area1 > Area2;
resultado3= Pib1 > Pib2;
resultado4= Pontos1 > Pontos2;
resultado5= densidade1 < densidade2;
resultado6= pibper1 > pibper2; 
resultado7= superpoer1 > superpoer2;

// Printf dos resultados
printf("Comparação das cartas: \n");
printf("População: Carta 01 Venceu (%d)\n",resultado1);
printf("Área: Carta 01 venceu(%d)\n",resultado2);
printf("Pib: Carta 01 venceu (%d)\n",resultado3);
printf("Pontos Turisticos: Carta 01 Venceu (%d)\n",resultado4);
printf("Densidade populacional: Carta 02 venceu (%d)\n",resultado5);
printf("Pib per capita:: Carta 01 venceu (%d)\n",resultado6);
printf("Super poder: carta 01 venceu (%d)\n",resultado7);

return 0;
} 
