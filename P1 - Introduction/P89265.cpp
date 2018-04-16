#include <iostream>

using namespace std;

int main() {
	int a1, b1, a2, b2;
	cin >> a1 >> b1 >> a2 >> b2;
    int max = a1;
    if (max < a2) max = a2;
    int min = b1; 
    if (min > b2) min = b2;
    if (a1 == a2 and b1 == b2) cout << "= , ";
    else if (max == a1 and min == b1) cout << "1 , ";
    else if (max == a2 and min == b2) cout << "2 , ";
    else cout << "? , ";
    if (min < max) cout << "[]";
    else cout << '[' << max << ',' << min << ']';
    cout << endl;

}
