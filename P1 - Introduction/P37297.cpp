#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int suma=0;
    int aux=3;
    while(aux>0){
        suma=suma+n%10;
        n=n/10;
        --aux;
    }
    cout<<suma<<endl;
}
