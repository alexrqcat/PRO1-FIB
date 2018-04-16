#include <iostream>

using namespace std;

int main(){
    int a,aux=0;
    cin>>a;
    aux=a/100;
    if(a%10==0 and a%100==0){
        if(aux%4==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else if(a%4==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
