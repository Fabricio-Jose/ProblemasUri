#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    string s;
    double b, c, d;
    cin>>s;
    cin>>b>>c;
    d=(c*15)/100;
    cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<<b+d<<"\n";
    
	return 0;
}
