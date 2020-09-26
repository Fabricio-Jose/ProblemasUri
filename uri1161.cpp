#include <iostream>
 
using namespace std;
long long fact(long long x){
    long long y=1;
    for(long long i=x;i>1;i--){
        y=y*i;
    }
    return y;
}

int main() {

long long x,y; 
long long a,b;

while(cin>>x>>y){
    if(x<=20 && x>=0){
        if(x<=20 && x>=0){
            a=fact(x);
            b=fact(y);
            a=a+b;
            cout<<a<<endl;
        }
    }
}
 
    return 0;
}
