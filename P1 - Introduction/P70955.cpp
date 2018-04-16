#include <iostream>

using namespace std;

int main(){
    int a,d,h,m,s;
    cin>>a>>d>>h>>m>>s;
    d=a*365+d;
    h=d*24+h;
    m=h*60+m;
    s=m*60+s;
    cout<<s<<endl;
}
