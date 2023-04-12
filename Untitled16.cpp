#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
	int a,b,c,d,enb;
	printf("Bir Sayi Giriniz:");
	scanf("%d",&a);
	printf("Bir Sayi Giriniz:");
	scanf("%d",&b);
	printf("Bir Sayi Giriniz:");
	scanf("%d",&c);
	printf("Bir Sayi Giriniz:");
	scanf("%d",&d);
	if(a>b) enb=a; else enb=b;
	if (c>enb) enb=c;
	if (d>enb) enb=d;
	printf("En Buyuk =%d\n",enb);
	printf("Karesi:%f",pow(enb,2));
	return 0;
	
	
	
}