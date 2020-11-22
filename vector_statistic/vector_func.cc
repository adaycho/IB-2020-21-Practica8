#include <vector>
#include <iostream>
#include <cmath>

double media_vector (std::vector<double> vector, int lenght) {      //Calcular la media
  double media;
  for(int i = 0; i < lenght; ++i) {
    media = media + vector[i];
  }
return media / lenght;
} 

double desv_standard (double media) {                               //Calcular la desviación típica
return sqrt(media);
} 

double max_value (std::vector<double> vector, int lenght) {         //Calcular el valor máximo
  double maxvalue;
  for(int i = 0; i < lenght; ++i) {
    if (i == 0) {
      maxvalue = vector[i];
    }
    if (vector[i] > maxvalue) {
      maxvalue = vector[i];
    }
  }
return maxvalue;
}

double min_value (std::vector<double> vector, int lenght) {         //Calcular el valor mínimo
  double maxvalue;
  double minvalue;
  for(int i = 0; i < lenght; ++i) {
    if (i == 0) {
      minvalue = vector[i];
    }
    if (vector[i] < minvalue) {
      minvalue = vector[i];
    }
  }
return minvalue;
}