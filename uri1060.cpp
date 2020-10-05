#include <iostream>

using namespace std;

int main(){
	
    float a[6];
    int b=0;
    
    for(int i=0;i<6;i++){
        cin >> a[i];
		if (a[i] >= 0)
			b++;
		}
    
    cout<<b<<" valores positivos"<<endl;
    
    return 0;
}
