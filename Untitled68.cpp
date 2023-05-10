#include <stdio.h>
#include <math.h>
int main(){
	int n,dizi[100],i,toplam;
	printf("N: ");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++){
		printf("%d.Elemani giriniz:",i);
		scanf("%d",&dizi[i]);
	}
	toplam=0;
	for(i=0;i<=n-1;i++){
		toplam=toplam+dizi[i];
	}
	printf("Toplam= %d ",toplam);
	return 0;
}