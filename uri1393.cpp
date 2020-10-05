#include<cstdio>
using namespace std;

int X[44];
int main(){
	int n;
	X[0]=1;
	X[1]=1;
	for(int i=2; i<=40; i++){
		X[i]=X[i-1]+X[i-2];
	}
	
	while(scanf("%d",&n)&& (n!=0))
		printf("%d\n",X[n]);

	return 0;
} 
