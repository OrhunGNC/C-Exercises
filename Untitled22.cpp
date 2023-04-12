#include <stdio.h>
#include <math.h>

int main(){
	int secim;
	float i,j,result;
	
	printf("Bir islem seciniz:\n");
	printf("1-Karekok alma\n");
	printf("2-Us alma\n");
	printf("3-e tabaninda logaritma\n");
	printf("4-10 tabaninda logaritma\n");
	printf("islem\n");
	
	scanf("%d",&secim);
	if(secim==1){
		printf("Sayiyi giriniz");
		scanf("%f",&i);
		result = sqrt(i);
		printf("Sonuc: %.f",result);
	}
	else if(secim==2){
		printf("Taban sayisini giriniz:");
		scanf("%f",&i);
		printf("Us sayisini giriniz:");
		scanf("%f",&j);
		result=pow(i,j);
		printf("Sonuc: %.f",result);
	}
	else if(secim==3){
		printf("Sayiyi giriniz:");
		scanf("%f",&i);
		result=log(i);
		printf("Sonuc: %.f",result);
	}
	else if(secim==4){
		printf("Sayiyi giriniz:");
		scanf("%f",&i);
		result=log10(i);
		printf("Sonuc: %.f",result);
	}
	else
	printf("Hatali secim yaptiniz...");
	return 0;
}