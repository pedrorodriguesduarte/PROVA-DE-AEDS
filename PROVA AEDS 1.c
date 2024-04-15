#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int PortaVazia, PortaEscolhida, certo;
  char opcao;

  srand(time(NULL));
  int PortaPremiada = rand() % 3 + 1;

  printf("BEM VINDO AO JOGO DO PEDRO  MALADNRO, VOU TE DAR 3 PORTAS E VOCE TEM QUE ESCOLHER UMA E VER SE VAI  GANHAR O PREMEIO \n\n");

  do {
    printf("ESCOLHA UMA PORTA DE 1 A 3: ");
    scanf("%d", &PortaEscolhida);
  } while (PortaEscolhida > 3 || PortaEscolhida < 1);

  for (int i = 1; i <= 3; i++) {
    if (i == PortaPremiada) {
      PortaPremiada = i;
    } else if (i == PortaEscolhida) {
      PortaEscolhida = i;
    } else {
      PortaVazia = i;
    }
  }

  printf("A PORTA QUE NAO TEM NADA E A  %d\n", PortaVazia);

  printf("\n VOCE QUER MUDAR A PORTA ? ");
  scanf(" %c", &opcao);

  if (opcao == 's') {
    for (int i = 0; i < 3; i++) {
      if (PortaEscolhida == PortaPremiada) {
        certo = 1;
      }
      if (PortaEscolhida != PortaPremiada && PortaEscolhida != PortaVazia) {
        certo = 0;
      }
    }
  }

  if (opcao == 'n') {
    if (PortaEscolhida == PortaPremiada) {
      printf(" \n PARABENS O PREMIO E SEU!");
    }
    if (PortaEscolhida != PortaPremiada) {
      printf(" \n VOCE NAO GANHOU, A PORTA QUE TINHA O PREMIO ERA A  %d",
             PortaPremiada);
    }
  }

  if (certo == 1) {
    printf(" VOCE PERDEU ,VOCE TROCOU PARA A PORTA QUE NAO TINHA NADA . A "
           "PREMIADA ERA A  %d\n",
           PortaEscolhida);
  }
  if (certo == 0) {
    printf(" VOCE TROCOU PARA A PORTA  %d\n", PortaPremiada);
    printf("VOCE FOI O VENCEDOR, PARABENS!");
  }
}