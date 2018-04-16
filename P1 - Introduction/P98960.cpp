#include <iostream>

using namespace std;

int main(){
    char x;
    cin >> x;
    if ((x >= 'a') and (x <= 'z')) x = char(x -32);
    else x = char(x +32);
    cout << x << endl;
}
