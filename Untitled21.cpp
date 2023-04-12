#include <stdio.h>
#include <math.h>

int main(){
	int sayi;
	printf("Sayiyi giriniz:");
	scanf("%d",&sayi);
	if (sayi%11==0)
	printf("Girilen sayi on bire bolunebilir\n");
	else
	printf("Girilen sayi on bire bolunemez\n");
	return 0;
}