#include <stdio.h>
#include <math.h>
int main(){
	int n,a[100],b[100],i;
	float skalercarpim;
	printf("N: ");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n-1;i++){
		printf("b[%d]=",i);
		scanf("%d",&b[i]);
	}
	skalercarpim=0;
	for(i=0;i<=n-1;i++){
		skalercarpim=skalercarpim+a[i]*b[i];
	}
	printf("Skaler carpim= %f",skalercarpim);
	return 0;
}