#nclude<cstdio>
using namespace std;

int main(){

	int x,i,a,b;
    int a_1,b_1,temp;
	scanf("%d",&x);
	for(i=0; i<x; i++){
		scanf("%d %d",&a_1,&b_1);
		if (a_1!=0 || b_1!=0){
			a=a_1;
			b=b_1;
			while(b != 0){
				temp=b;
				b=a%b;
				a=temp;
			}
			printf("%d\n",temp);
		}else
			printf("0\n");
	}

	return 0;
}
