#include <iostream>
#include <vector>

using namespace std;

int main(){
    int min;
    int p;
    int x;
    vector<int> listStudents;
    cin >> min;
    while(min > 0){
	cin >> p;
	cin >> x;
	if(p == 1){
	    listStudents.push_back(x);
	}else{
	    //contar los que son menores
	    int counter=0;
	    for( int item : listStudents){
		if( item <= x)
		    counter++;
	    }
	    cout << counter << endl;
	}
	min--;
    }
    return 0;
}
    
