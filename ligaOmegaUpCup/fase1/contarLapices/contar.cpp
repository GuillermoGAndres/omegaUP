#include <iostream>
#include <vector>
using namespace std;

int main(){
  int n;
  int lapiz;
  vector<int> array;
  int total=0;
  cin >> n >> lapiz;
  for(int i=0; i < n; i++){
    int item;
    cin >> item;
    array.push_back(item);
  }
  for(int i=0; i < array.size(); i++){
    if(array.at(i) == lapiz){
      total++;
    }
  }
  cout << total << endl;
  return 0;
}
