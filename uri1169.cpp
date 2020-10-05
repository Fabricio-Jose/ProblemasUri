#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n,x,i;
    unsigned long long rspt;
    cin >> n;
    for(i=0; i<n; i++){
             cin >> x;
             rspt= trunc(trunc(pow(2,x)/12)/1000);
             cout << rspt << " kg" << endl;
    }
    return 0;
}
