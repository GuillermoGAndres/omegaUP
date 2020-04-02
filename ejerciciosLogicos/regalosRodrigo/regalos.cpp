#include <iostream>
#include <vector>

using namespace std;

int main(){
  int n;
  vector<int> array;
  cin >> n;
  for(int i=0; i < n; i++){
    int item;
    cin >> item;
    array.push_back(item);
  }
  int sum = 0;
  for(int i=0; i < array.size() - 1; i++){
    sum += array.at(i);
  }
  if(sum == array.at(array.size() -1) ){
    cout << 1 << endl;
  }else{
    cout << -1 << endl;
  }
  return 0;
}
  
