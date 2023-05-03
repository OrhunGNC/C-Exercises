#include <stdio.h>
float factor(int k){
	int i;
	float f=1;
	for(i=1;i<=k;i++){
		f=f*i;
	}
	return(f);
}
int main(){
	int n,r;
	float kom;
	printf("N: ");
	scanf("%d",&n);
	printf("R: ");
	scanf("%d",&r);
	kom= factor(n)/(factor(r)*factor(n-r));
	printf("Kombinasyon= %8.0f",kom);
	return 0;
}