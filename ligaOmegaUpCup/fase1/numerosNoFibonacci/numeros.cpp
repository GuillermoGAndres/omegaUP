#include <iostream>
#include <vector>
using namespace std;

int main(){
  int n;
  vector<int> numfib;
  vector<int> numNoFib;
  cin >> n;
  int a = 1;
  int b = 2;
  int c = 0;
  int bandera = false;
  numfib.push_back(a);
  numfib.push_back(b);
  int i=1;
  while(n > numfib.at(i)){
    c = a + b;
    a = b;
    b = c;
    numfib.push_back(c);
    i++;
  }
  numfib.pop_back();
  for(int i=1; i <= n; i++){
    for(int j=0; j < numfib.size(); j++){
      if(i == numfib[j]){
	bandera = true;
      }
    }
    if(bandera == false){
      numNoFib.push_back(i);
    }else{
      bandera = false;
    }
  }
  numNoFib.pop_back();
  for(int x : numNoFib){
    cout << x <<" ";
  }
	
     
	
  return 0;
}
