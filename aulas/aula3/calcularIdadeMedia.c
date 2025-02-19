#include <stdio.h>

int main() {
  int tati, matheus, rafael, isabele;
  printf("Digital a idade da tati: ");
  scanf("%d", &tati);

  printf("Digital a idade do matheus: ");
  scanf("%d", &matheus);

  printf("Digital a idade do rafael: ");
  scanf("%d", &rafael);

  printf("Digital a idade da isabele: ");
  scanf("%d", &isabele);

  float idadeMedia;

  idadeMedia = (tati + matheus + rafael + isabele) / 4.0;

    printf("A idade media eh: %.2f", idadeMedia);

  return 0;
}