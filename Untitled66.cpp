#include <stdio.h>
#include <math.h>
float factor(int i){
	float fac=1;
	while(i>=1){
		fac*=i;
		i=i-1;
	}
	return(fac);
}
int main(){
	int n;
	float fact;
	printf("N: ");
	scanf("%d",&n);
	fact=factor(n);
	printf("%f",fact);
	return 0;
}