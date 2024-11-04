#include <stdio.h>
#include <iostream>
#include <locale.h>

int main() {
int num, var, tot;

  std::cout << "Digite um número: ";
  std::cin >> num;
  var = num;
  tot = num;

  while (var != 1){
    tot = tot * (var - 1);
    var = var - 1;
  }

  std::cout << "O fatorial é: " << tot << std::endl;
}
