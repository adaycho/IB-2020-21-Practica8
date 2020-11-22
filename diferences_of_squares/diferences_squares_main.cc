//Este programa te permite introducir un valor en el comando de ejecución y calculará la suma de los n primeros números y la elevará al cuadrado,
//y a esta suma le restará la suma del cuadrado de los n primeros números

#include <iostream>
#include "diferences_squares_func.h"
#include <string>

int main (int argc, char*argv[]){ 

  if(argc > 1) {
    std::string help = argv[1];
    if(help == "--help") {
      std::cout << "El programa pide que introduca un número natural N por la linea de comandos" << std::endl;
      std::cout << "Con ese número, calculará la suma de los n primeros números y la elevará al cuadrado" << std::endl;
      std::cout << "Y a esta suma le restará la suma del cuadrado de los n primeros números" << std::endl;
    }
    else {
      int number = std::stoi (argv[1]);;
      std::cout << addnatural(number) - addsquare(number) << std::endl;
    }
  } 
  else if(argc == 1) {
    std::cout << "Falta un número natural como parámetro" << std::endl;
    std::cout << "Pruebe './diferences_of_square --help' para más información" << std::endl;
  }

return 0;
}