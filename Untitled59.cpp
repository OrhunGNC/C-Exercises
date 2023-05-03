#include <stdio.h>
float Us(int x, int n){
	int i,f=1;
	for(i=1;i<=n;i++){
		f=f*x;
	}
	return(f);
}
int main(){
	int n,x,s;
	printf("X: ");
	scanf("%d",&x);
	printf("N: ");
	scanf("%d",&n);
	s=Us(x,n);
	printf("%d uzeri %d=%d",x,n,s);
	return 0;
}