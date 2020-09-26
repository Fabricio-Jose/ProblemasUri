#include <iostream>

using namespace std;

int main(){
long long x,y;
x=0;
y=0;

while(cin>>x>>y){
    if(x>y)
        cout<<x-y<<endl;
    else
        cout<<y-x<<endl;
 }

 return 0;
} 
