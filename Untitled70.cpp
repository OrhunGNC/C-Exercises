#include <stdio.h>
#include <math.h>
int main(){
	char isaret;
	int i,a,b;
	float s;
	printf("Birinci Sayiyi Giriniz:");
	scanf("%d",&a);
	printf("Ikinci Sayiyi Giriniz:");
	scanf("%d",&b);
	printf("Islemi Giriniz:");
	scanf("%s",&isaret);
	
	switch(isaret){
		case '+' : s=a+b; break;
		case '-' : s=a-b; break;
		case '*' : s=a*b; break;
		case '/' : s=a/b; break;
		case '^' : s=pow(a,b); break;
		case '$' : s=sqrt(a); break;
		default: printf("Girilen islem uygun degil...");
	}
	printf("Sonuc: %3.f",s);
	return 0;
	
}