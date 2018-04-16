#include <iostream>
#include <string>

using namespace std;

int main(){
    cout.setf(ios::fixed);
     cout.precision(4);
  double i,b;
  string aux;
  cin >> i >> aux;
  i = i/100;
  if(aux == "semestral"){
    b = i/2 + 1;
    b = b*(i/2)+b;
  }
  else if(aux == "setmanal"){
    i = i /52;
    b = i+1;
    for(int j = 0; j < 51; ++j){
        b = b*i+b;
    }
  }
  else if (aux == "mensual"){
    i = i / 12;
    b = i + 1;
    for(int j = 0; j < 11; ++j){
        b = b*i+b;
    }
  }
  else{
    i = i / 4;
    b = i + 1;
    for(int j = 0; j < 3; ++j){
        b = b*i+b;
    }
  }
  cout << ((b-1)*100) << endl;
}
