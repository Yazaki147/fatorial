#include <stdio.h>
#include <locale.h>

int main(){
  setlocale (LC_ALL, "Portuguese");
  int num[9];
  int n, cont, prim;

  printf ("Digite os 9 números escolhidos:\n ");

  for (n = 0; n < 9; n++){
    printf ("Posição [%i]: ", n);
    scanf ("%i", &num[n]);
  }

  printf ("\nOs números primos encontrados são: \n");

  for (n = 0; n < 9; n++){
    prim = 1;

    if (num[n] <= 1){
      prim = 0;
    }
    for (cont = 2; cont < num[n]; cont++){
      if (num[n] % cont == 0){
        prim = 0;
        break;
      }
    }
      if (prim == 1){
      printf ("Posição [%i] - Valor [%i]\n", n, num[n]);
      }
  }
  return 0;
}
