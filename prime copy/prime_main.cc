//Este programa te permite introducir un valor en el comando de ejecución y le devuelve ese número primo

#include <iostream>
#include "prime_func.h"

int main (int argc, char*argv[] ) {
  int position = std::stoi (argv[1]);
  int prime = n_primenumber(position);
  std::cout << prime<< std::endl;
  return 0;
}