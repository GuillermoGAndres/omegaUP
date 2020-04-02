#include <iostream>
#include <cmath>
using namespace std;

int main(){
  string cadena;
  cin >> cadena;
  int sum = 0;
  for(int i=cadena.size()-1,posicion=0; i > -1 ; i--,posicion++){
    if( cadena[i] == '1'){
      sum += pow(2,posicion);
    }      
  }
  cout << cadena<<"="<<sum << endl;
  return 0;
}
