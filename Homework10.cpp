#include <stdio.h>
#include <math.h>
float us(int x,int n){
	int i;
	float sonuc=1;
	for(i=1;i<=n;i++){
		sonuc=sonuc*x;
	}
	return(sonuc);
}
int main(){
	int n,isaret,x;
	float s,terim;
	do
	{
		printf("X: ");
		scanf("%d",&x);
	} while(x<=1);
	s=x;
	isaret=-1;
	n=1;
	do
	{
		terim=(n*n)/us(x,n);
		s=s+isaret*terim;
		isaret=isaret*(-1);
		n=n+1;
		printf("S: %f\n",s);
	} while(terim>0,0001);
	return 0;
}
