#include<cstdio>
#include<cstring>
using namespace std;

int main(){
	int j,tam,array;
	int fac[6];
	char numeros[6];
	fac[1]=1;
	fac[2]=2;
	fac[3]=6;
	fac[4]=24;
	fac[5]=120;

	while(scanf("%s",numeros)){
		tam=strlen(numeros);
		if(tam==1 && (numeros[0]-'0'==0))
			break;
		array=0;
		j=0;
		for(int i=tam; i>0; i--)
			array+=fac[i]*(numeros[j++]-'0');

		printf("%d\n",array);
	}

	return 0;
}
