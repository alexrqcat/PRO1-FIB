#include <iostream>

using namespace std;

int main(){
	char x, y;
	cin >> x >> y;
	if(x == 'A'){
		if(y == 'P') cout << '1';
		else if(y == 'V') cout << '2';
		else cout << '-';
	}
	else if (x == 'P'){
		if(y == 'A') cout << '2';
		else if(y == 'V') cout << '1';
		else cout << '-';
	}
	else {
		if(y == 'A') cout << '1';
		else if(y == 'P') cout << '2';
		else cout << '-';
	}
	cout << endl;
}
