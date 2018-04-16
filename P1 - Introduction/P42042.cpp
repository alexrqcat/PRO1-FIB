#include <iostream>

using namespace std;

int main(){
    char x;
    cin >> x;
    if ((x >= 'a') and (x <= 'z')){
        cout << "minuscula" << endl;
        if ((x == 'a')or(x == 'e')or(x == 'i')or(x == 'o')or (x == 'u')) cout << "vocal";
        else cout << "consonant";
    }
    else {
        cout << "majuscula" << endl;
        if ((x == 'A')or(x == 'E')or(x == 'I')or(x == 'O')or (x == 'U')) cout << "vocal";
        else cout << "consonant";
    }
    cout << endl;
}
