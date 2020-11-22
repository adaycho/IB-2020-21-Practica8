//Este programa te de ciertas estadísticas de los 10 string almacenados en el vector "textlines"
//Te da a conocer la primera letra, la última, la longitud del texto y si está escrtio "abracadabra" en el

#include <iostream>
#include <vector>
#include <string> 
#include "string_func.h"

int main () {
  const std::vector<std::string> textlines = {"deportes", "magia abracadabra", "videojuegos de miedo", 
  "choclate", "pccomponentes", "dinosaurio", "alakazam", "abracadabra23", "pokemon", "ultra"};
  for(int i = 0 ;i < 10; ++i){
    std::string actualword = textlines[i];
    std::cout << "Palabra: " << actualword << ". Tamaño: " << textlength(actualword) << ". Primera letra: " 
    << frontchar(actualword) << ". Última letra: " << backchar(actualword) << 
    ". ¿Contiene abracadabra? " << abracadabra(actualword) << std::endl;
  }
}