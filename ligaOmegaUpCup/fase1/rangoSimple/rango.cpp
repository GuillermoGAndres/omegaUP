#include <iostream>
#include <vector>

using namespace std;

int main(){
  int n;
  cin >> n;
  int inf,sup;
  int total=0;
  vector<int> array;
  for(int i=0; i < n; i++){
    int item;
    cin >> item;
    array.push_back(item);
  }
  cin >> inf >> sup;
  for(int i=0; i < array.size(); i++){
    if(array.at(i) <= sup)
      if(array.at(i) >= inf){
	total++;
      }
  }
  cout << total << endl;
  
  return 0;
}
