#include <iostream>

using namespace std;

int main() {
    int a ,b;
    cin >> a >> b;
    if (b >= a){
      while (a < b){
        cout << a <<',';
        ++ a;
      }
      cout << b;
    }
    cout << endl;
}
