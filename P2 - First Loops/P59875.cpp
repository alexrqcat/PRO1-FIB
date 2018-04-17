#include <iostream>

using namespace std;

int main() {
  int max , min, aux;
  cin >> max >> min;
  if (max < min){
    aux = max;
    max = min;
    min = aux;
  }
  while (max >= min) {
    cout << max << endl;
    -- max;
  }
}
