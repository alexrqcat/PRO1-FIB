#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int aux=n%3600;
    if(n>=3600) cout<<n/3600<<" ";
    else cout<<"0 ";
    n=aux%60;
    if(aux>=60) cout<<aux/60<<" ";
    else cout<<"0 ";
    cout<<n<<endl;
}
