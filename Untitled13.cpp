#include <stdio.h>

int main(){
	int a,b,alan,cevre;
	printf("Kisa Kenar Uzunlugu: ");
	scanf("%d", &a);
	
	printf("Uzun Kenar Uzunlugu:");
	scanf("%d", &b);
	
	printf("Dikdortgenin Alani: %d\n",a*b);
	printf("Dikdortgenin Cevresi: %d\n",(a+b)*2);
	return 0;
}