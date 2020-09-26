#include <iostream>
 
using namespace std;
 
int main() {
    int area= 70*160/2;
    
    int b,t;
    cin>>b>>t;
    
    if ((b+t)*70/2>area){
        cout<<1<< endl;
    }
    else if ((b+t)*70/2<area){
        cout << 2 << endl;
    }
    else {
        cout << 0 << endl;
    }
 
    return 0;
}
