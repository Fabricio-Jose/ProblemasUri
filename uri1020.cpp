#include <iostream>

using namespace std;

int main() {
	
    int A,a,m,d;
    cin >> A;

    a = A / 365;
    m = (A % 365) / 30;
    d = (A % 365) % 30;
    
    cout << a << " ano(s)" << endl;
    cout << m << " mes(es)" << endl;
    cout << d << " dia(s)" << endl;
    
    return 0;
}
