#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int x;
	cin >> x;
    x=x*x*x;
	cout<<"VOLUME = "<<fixed<<setprecision(3)<<((4*3.14159*x)/3)<<endl;

	return 0;
}
