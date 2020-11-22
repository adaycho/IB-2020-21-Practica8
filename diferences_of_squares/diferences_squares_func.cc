int addnatural (int& number) {    //Calcula el la suma de los números naturales entre 0 y n, y la eleva al cuadrado
  int addtotal{0};
  for(int i=1; i<=number; ++i){
    addtotal = addtotal + i;
  }
  return addtotal * addtotal;
}
  
int addsquare (int& number) {     //Calcula el cuadrado de los números naturales entre 0 y n, y los suma
  int addtotal{0};
  for(int i=1; i<=number; ++i){
    addtotal = addtotal + i*i;
  }
  return addtotal;
}
  