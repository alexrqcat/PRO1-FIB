#include <iostream>
using namespace std;
int main (){
int a,b,d,r;
cin>>a>>b;
d=a/b;
r=a%b;
if(d<0 and r!=0) d--;
    r=a-b*d;
if(r<0){
    r=r*-1;
}
cout <<d<<" "<<r<< endl;
}
