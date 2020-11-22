//Este programa te de ciertas estadísticas de un vector generado con números aleatorios
//Por linea de comando del programa introduces el tamaño del vector y el valor máximo y mínimo de los generados aleatoriamente
//Te devuelve la media del vector, la desviación estandar el valor más grande y el más pequeño

#include <iostream>
#include <vector>
#include <ctime> 
#include <cstdlib>
#include "vector_func.h"
#include <algorithm>

int main (int argc, char*argv[] ) {
  int lenght = std::stoi (argv[1]);
  double minvalue = std::stoi (argv[2]);
  double maxvalue = std::stoi (argv[3]);
  std::srand(time(NULL));
  std::vector<double> vector(lenght);
  for(int i = 0; i < lenght; ++i) {
    vector[i] = minvalue + (std::rand() / (RAND_MAX/(maxvalue - minvalue)));
  }
  double media = media_vector(vector, lenght);
  std::cout << "Media: " << media << std::endl;
  std::cout << "Desviación estandar: " << desv_standard(media)  << std::endl;
  std::cout << "Máx: " << max_value(vector, lenght) << std::endl;
  std::cout << "Mínx: " << min_value(vector, lenght) << std::endl;
  return 0;
}