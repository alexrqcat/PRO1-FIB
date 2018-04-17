#include <iostream>

using namespace std;

int main() {
  cout.setf(ios::fixed);
  cout.precision(4);
  double n;
  cin >> n;
  double aux = 0;
  for (double i = 1 ; i <= n ; ++i){
    aux = aux + 1 / i;
  }
  cout << aux << endl;
}
