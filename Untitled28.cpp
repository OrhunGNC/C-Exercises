#include <stdio.h>
#include <math.h>

int main(){
	int i,sayi,n;
	float toplam,ortalama;
	printf("N sayisini giriniz:");
	scanf("%d",&n);
	toplam=0;
	for(i=0;i<n;i++){
		printf("%d.Sayiyi giriniz:",i);
		scanf("%d",&sayi);
		toplam=toplam+sayi;
	}
	ortalama=(toplam/n);
	printf("Aritmetik Ortalama=%f",ortalama);
	return 0;
}
	