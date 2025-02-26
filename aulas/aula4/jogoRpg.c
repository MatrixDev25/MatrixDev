#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
//variavel que captura o valor do dado
int numerodado;

//variavel que gerencia a entrada e saida da estrutura de controle
int  saida = 1;

//mudando a semente para gerar numeros aleatorios
srand(time(NULL));

printf(O jogo começou!\n);


while(saida != 0)
  printf("jogando o dado...\n");
  numerodado = rand() % 6 + 1;
  printf(O numero sorteado foi: %d\n, numerodado);
  
  printf("deseja continuar ? \n0 - não\n1 - sim\nesolha: ");
  scanf("%d", &saida);
}

  printf( "O jogo acabou!\n");

  retrun 0;
}  