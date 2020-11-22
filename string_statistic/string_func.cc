#include <vector>
#include <iostream>
#include <string>

int textlength (std::string actualword) {                     //Te devuelve el támaño del string
  return actualword.length();
}

char frontchar (std::string actualword) {                     //Te devuelve la primera letra del string
  return actualword.front();
}

char backchar (std::string actualword) {                      //Te devuelve la úñtima letra del string
  return actualword.back();
}

std::string abracadabra(std::string actualword) {             //Te dice si la string contiene "abracadabra"
  std::string searchedword = "abracadabra";
  if (actualword.find(searchedword) != std::string::npos){
    return "Si";
  }
  else {
    return "No";
  }
}
