#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    
    double R;
    cin >> R;
    R=R*R;
    cout << "A="<<fixed<<setprecision(4)<<3.14159*R<<endl;
    
    return 0;
}
