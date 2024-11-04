#include <iostream>
#include <bitset>

int main(){
  int escolha;

  do {
    int num;

    std::cout << "Insira um número decimal: ";
    std::cin >> num;

    std::bitset<16> binario(num);

    std::cout << "Número Binário: " << binario << std::endl;
    std::cout << "Número Octal: " << std::oct << num << std::endl;
    std::cout << "Número Hexadecimal: " << std::hex << num << std::endl;

    std::cout << "Deseja Continuar?" << std::endl;
    std::cout << "1 - Sim" << std::endl;
    std::cout << "2 - Não" << std::endl;
    std::cin >> escolha;
    
  } while (escolha == 1);

  std::cout << "Encerrando o programa..." << std::endl;

  return 0;
}
