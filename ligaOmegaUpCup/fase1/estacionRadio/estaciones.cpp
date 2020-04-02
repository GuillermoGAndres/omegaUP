#include <iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  if(n >= 540 and n <= 1520){
    if( n < 580){
      int a = 580 - n;
      cout << "adelante "<<a<<endl;
    }else if( n < 980){
      int a = n - 580;
      int b = 980 - n;
      if( a < b ){
	cout << "atras "<< a << endl;
      }else if ( a <= b){
	cout << "adelante " << b << endl;
      }else{
	cout << "adelante "<<b<< endl;
      }   
    }else if( n < 1190){
	int a = n - 900;
	int b = 1190 - n;
	if( a < b ){
	  cout << "atras "<< a << endl;
	}else if ( a <= b){
	  cout << "adelante " << b << endl;
	}else{
	  cout << "adelante "<<b<< endl;
	}
      }else if( n < 1250){
	int a = n - 1190;
	int b = 1250 - n;
	if( a < b ){
	  cout << "atras "<< a << endl;
	}else if ( a <= b){
	  cout << "adelante " << b << endl;
	}else{
	  cout << "adelante "<<b<< endl;
	}
      }else if ( n < 1450){
	int a = n - 1250;
	int b = 1450 - n;
	if( a < b ){
	  cout << "atras "<< a << endl;
	}else if ( a <= b){
	  cout << "adelante " << b << endl;
	}else{
	  cout << "adelante "<<b<< endl;
	}
      }else if( n > 1450){
	int a = 1450 - n;
	cout << "atras "<<a << endl;
      }
  }
  return 0;
}
