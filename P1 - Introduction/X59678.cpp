#include <iostream>

using namespace std;

int main(){
    int n , m, x;
    cin >> n >> m >> x;
    if ((n < m) and (n < x)) cout << n << endl;
    else if (m < x)  cout << m << endl;
    else cout << x << endl;
}
