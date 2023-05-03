#include <stdio.h>
#include <math.h>
int fac=1;
int f;
float factor(int k){
	//int i;
	//float f;
	//f=1;
	//for(i=2;i<=k;i++){
	//	f=f*i;
	//}
	fac*=k;
	return(f);
}
float us(int x, int n){
	//int i;
	//float f=x;
	//for(i=2;i<=n;i++){
	//	f=f*x;
	//}
	f=pow(x,n);
	return(f);
}
int main(){
	int i,n,x;
	float e=1;
	
	printf("N: ");
	scanf("%d",&n);
	printf("X: ");
	scanf("%d",&x);
	for(i=1;i<=n;i++){
		e=e+us(x,i)/factor(i);
	}
	printf("e uzeri %d=%3.0f",x,e);
	return 0;
}