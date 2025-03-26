#include <stdio.h>

int main() {

// trecho que não utiliza array (vetores) 
int rafael = 22, tati = 30, matheus = 22, brenddon = 25;
float idadeMedia;
   
printf("\nMostrando valores via varíavel isolada:");
printf("\n%d", rafael); 
printf("\n%d", tati); 
printf("\n%d", matheus);
printf("\n%d", brenddon); 

idadeMedia = (rafael + tati + matheus + brenddon)/4.0;
printf("Idade média via varíavel separada: %f\n\n", idadeMedia);  



//utilizando vetores
int TamanhoTurma = 4;

//primeiro jeito;
//int idades [tamanhoturma]; = {22, 30, 22, 25};


//segundo jeito:
int idades[TamanhoTurma]; // == idades[4]

float mediaIdadeVetor = 0;

  idades[0] = 22;
  idades[1] = 30;
  idades[2] = 22;
  idades[3] = 25;

  printf("/nMostrando valores via vetor:\n");
  //i = i + 1 ======= i++
  for (int i = 0; i < TamanhoTurma ; i++) {
  printf("\t%d", idades[i]);
  mediaIdadeVetor = mediaIdadeVetor + idades[i]; 
  }

  mediaIdadeVetor = mediaIdadeVetor/4.0;

 printf("\nIdade média via vetor: %f\n\n", mediaIdadeVetor);
  
 return 0;  
}