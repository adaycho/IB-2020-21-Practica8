int addnatural (int& number) {
  int addtotal{0};
  for(int i=1; i<=number; ++i){
    addtotal = addtotal + i;
  }
  return addtotal * addtotal;
}
  
int addsquare (int& number) {
  int addtotal{0};
  for(int i=1; i<=number; ++i){
    addtotal = addtotal + i*i;
  }
  return addtotal;
}
  