#include <iostream>
using namespace std;

bool esRoca(char a,int indice){
  if(a == '1' && indice != 0){
    return true;
  }else{
    return false;
  }
}

char saltar(string camino, int salto){
  return camino[salto-1];
}

int main(){
  int k, n;
  string camino;
  cin >> k >> n;
  cin >> camino;
  int jump = n;
  int minSalto = 0;
  int dist = 0;
  while( dist != k && jump > 0){
    if(dist+jump <= k){
      char roca = saltar(camino, dist+jump);
      if(esRoca(roca, (dist+jump)-1)){
	minSalto += 1;
	dist += jump;
	jump=4;
      }else{
	jump--;
      }
    }else{
      jump--;
    }    
  }
  if(dist != 0){
    cout << minSalto << endl;
  }else{
    cout << -1 << endl;
  }
  return 0;
}
