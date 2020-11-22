int n_primenumber (int position) {
  int prime[position - 1]{0};
  int actualnumber{1};;
  for(int i = 0; i <= position; ++i) {          //Bucle para buscar el n-ésimo número primo
    int divider{2};                             //EL primer divisor será el primer número primo
    ++actualnumber;
    while (actualnumber > divider ) {           //Comprueba que sea número primo. Si no encuentra divisores para que resto = 0, es primo
      if(actualnumber % divider == 0) {         //Si el resto del actualnumber/divider es 0, sabemos que no es primo, así que pasa al siguiente número
        ++actualnumber;
        divider = 2;
      }
      else {                                    //Si la división no es 0, se le suma 1 al divisor en busca si hay alguno que de 0
          ++divider;
      }
    }
    prime[i] = actualnumber;
  }
  return prime[position - 1];
}
  