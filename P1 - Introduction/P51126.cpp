#include <iostream>

using namespace std;

int main(){
    int a1, a2, b1, b2;
    cin >> a1 >> b1 >> a2 >> b2 ;
    if ((b1 < a2) or (b2 < a1)) cout << '[';
    else if (a1 <= a2){
            cout << '[' << a2 << ',';
        if (b2 <= b1) cout << b2;
        else cout << b1;
    }
    else {
        cout << '[' << a1 << ',';
        if (b1 <= b2) cout << b1;
        else cout << b2;
    }
    cout << ']' <<endl;


}
