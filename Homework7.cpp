#include <stdio.h>
#include <math.h>

int main(){
	int n,dizi[n],sonuc,k,i;
	printf("N: ");
	scanf("%d",n);
	sonuc=0;
	k=0;
	for(i=0;i<=(n-1);i++){
		if(dizi[i]>0){
			sonuc=sonuc+dizi[i];
			k=k+1;
		}
	}
	sonuc=sonuc/k;
		printf("%d",sonuc);
	return 0;
}