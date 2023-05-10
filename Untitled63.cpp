#include <stdio.h>
#include <math.h>
float uslusayi(int x,int i){
	float sonuc;
	sonuc=pow(x,i);
	return(sonuc);
}
float factor(int n){
	int i;
	float sonuc=1;
	for(i=1;i<=n;i++){
		sonuc=sonuc*i;
	}
	return(sonuc);
}
int main(){
	int n,x,i,isaret;
	float cosinus;
	printf("N: ");
	scanf("%d",&n);
	printf("X: ");
	scanf("%d",&x);
	cosinus=1;
	isaret=-1;
	i=2;
	while(i<=(2*n)){
		cosinus=cosinus+isaret*uslusayi(x,i)/factor(i);
		isaret=isaret*(-1);
		i=i+2;
	}
	printf("Cos(%d)=%f ",x,cosinus);
	return 0;
}