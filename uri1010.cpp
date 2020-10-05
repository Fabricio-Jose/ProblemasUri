#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    string x;
    int b, d;
    double a, h, y;

    cin>>x;
    cin>>b>>a;
    cin>>x;
    cin>>d>>h;
    y=(b*a)+(d*h);

    cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<y<<"\n";
    
    return 0;
}
