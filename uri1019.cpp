#include <iostream>

using namespace std;

int main(){
	
    int x,h,m,s;
    cin>>x;
    
    h=x/3600;
    m=(x%3600)/60;
    s=(x%3600)%60;
    
    cout<<h<<":"<<m<<":"<<s<<endl;

    return 0;
}
