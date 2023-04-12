#include <stdio.h>
#include <math.h>

int main(){
	int i,toplam,sayi;
	printf("Sayiyi giriniz:");
	scanf("%d",&sayi);
	toplam=1;
	for(i=2;i<=sayi/2;i++){
		if (sayi%i==0){
			toplam=toplam+i;
		}
	}
	if (sayi==toplam){
			printf("%d Mukemmel Sayi",sayi);
		}
		else printf("&d Mukemmel Sayi Degil",sayi);
	return 0;
}