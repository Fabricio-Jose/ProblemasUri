#include<iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    int n;
    int c=0;
    cin>>n;
    float *A=new float[n];
    
    if(n>=1 && n<=20){
    for(int i=0;i<n;i++){
        float x_1,x_2,x_3,y_1,y_2,y_3,total;
           
        cin>>x_1>>y_1>>x_2>>y_2>>x_3>>y_3;
        float z_1,z_2;
        z_1=(x_1*y_2)+(x_2*y_3)+(x_3*y_1);
        z_2=(x_1*y_3)+(x_3*y_2)+(x_2*y_1);
        total=(z_1-z_2)/2;
        A[i]=total;
    }
     for(int i=0;i<n;i++){
    cout<<fixed<<setprecision(3)<<abs(A[i])<<endl;        
    }
    }
return 0;
}
