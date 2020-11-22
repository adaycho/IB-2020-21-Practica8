#include <vector>
#include <iostream>
#include <cmath>

double media_vector (std::vector<double> vector, int lenght) {
  double media;
  for(int i = 0; i < lenght; ++i) {
    media = media + vector[i];
  }
return media / lenght;
} 

double desv_standard (double media) {
return sqrt(media);
} 

double max_value (std::vector<double> vector, int lenght) {
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

double min_value (std::vector<double> vector, int lenght) {
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