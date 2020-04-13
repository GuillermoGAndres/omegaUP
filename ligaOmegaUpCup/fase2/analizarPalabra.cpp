#include <iostream>
using namespace std;
char vocales[] = {'a', 'e', 'i', 'o', 'u'};

bool esVocal(char vocal){
  for(int i=0; i < 5; i++){
    if(vocal == vocales[i]){
      return true;
    }
  }
  return false;
}

int main(){
  string palabra;
  int coun = 0;
  int vowel = 0;
  cin >> palabra;
  cout << palabra.length() << endl;
  for(int i=0; i < palabra.size(); i++){
    if(esVocal(tolower(palabra[i]))){
	vowel++;
      }
  }
  cout << vowel << endl;
  for(int i=palabra.size()-1; i > -1; i--){
    cout<< palabra[i];
  }
  cout<<endl;
  
  return 0;
}
