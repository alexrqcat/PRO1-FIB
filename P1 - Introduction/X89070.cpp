#include <iostream>

using namespace std;

int main(){
    int a ,b ,c;
    cin >> a >> b >> c;
    int maxi = a, mini = b;
    if(b > maxi) maxi = b;
    if(c > maxi ) maxi = c;
    if(a < mini) mini = a;
    if(c < mini) mini = c;
    cout << mini + maxi << endl;
}
