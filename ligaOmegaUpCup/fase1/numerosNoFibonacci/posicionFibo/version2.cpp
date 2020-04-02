#include <iostream>
#include <vector>
using namespace std;

int main(){
  int n;
  bool in = false;
  int posicion;
  vector<int> numfib;
  cin >> n;
  int a=1;
  int b=1;
  int c;
  numfib.push_back(a);
  numfib.push_back(b);
  int i=0;
  while( numfib.at(i) < n or numfib.at(){
    c = a+b;
    a=b;
    b=c;
    numfib.push_back(c);
    i++;
  }
  if(in == false){
    cout << -1 << endl;
  }else if(posicion == 1){
    cout << posicion << endl;
  }else{
    cout << posicion+1 << endl;
  }
  return 0;
}
  
  
