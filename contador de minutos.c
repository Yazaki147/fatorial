#include <iostream>

void convertSeg (int totalSeg, int& hor, int& min, int& seg){
  hor = totalSeg / 3600;
  totalSeg %= 3600;
  min = totalSeg / 60;
  seg = totalSeg % 60;
}

int main(){
  int totalSeg, hor, min, seg;

  std::cout << "Digite o total de segundos: ";
  std::cin >> totalSeg;

  convertSeg (totalSeg, hor, min, seg);

  std::cout << "Isso equivale a: " << std::endl;
  std::cout << "Horas: " << hor << std::endl;
  std::cout << "Minutos: " << min << std::endl;
  std::cout << "Segundos: " << seg << std::endl;

  return 0;
}
