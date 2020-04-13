#include <iostream>
//#include <vector>

using namespace std;

int main(){
  int n;
  cin >>n;
  int vec1[n];
  int vec2[n];
  for(int i=0; i < n; i++){
    int item;
    cin >> item;
    vec1[i] = item;
  }
  for(int i=0; i < n; i++){
    int item;
    cin >> item;
    vec2[i] = item;
  }

  for(int i=0; i < n; i++){
    cout << vec1[i] + vec2[i] << " ";
  }
  return 0;
}
  
