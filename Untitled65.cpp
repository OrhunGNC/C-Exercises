#include <stdio.h>
#include <math.h>
float factor(int i){
	float fac=1;
	while(i>=1){
		fac*=i;
		i-=1;
	}
	
	return(fac);
}
int main(){
	int n,i;
	float ii,sonuc=0.0;
	printf("N: ");	
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		ii=(float)i/2;
		sonuc=sonuc+factor(i)+ii;
	}
	printf("Sonuc: %f",sonuc);
	return 0;
}