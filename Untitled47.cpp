#include <stdio.h>
#include <math.h>

int main(){
	int i,n,dizi[100],toplam;
	printf("Eleman Sayisi: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Dizi[%d]=",i);
	    scanf("%d",&dizi[i]);
	}
	toplam=0;
	for(i=0;i<n;i++){
		toplam=toplam+dizi[i];
	}
	printf("Toplam=%d",toplam);
	return 0;
}