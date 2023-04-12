#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
	int a,b,c,ucg;
	printf("A Degerini Giriniz:");
	scanf("%d",&a);
	printf("B Degerini Giriniz:");
	scanf("%d",&b);
	printf("C Degerini Giriniz:");
	scanf("%d",&c);
	if (a==b && a==c){
		ucg=3;
 }
	else{
		if(a==b && a!=c) ucg=2;
		else{
			ucg=2;
		}
		if(a!=b && a!=c && b!=c) ucg=1;
	}
	if (ucg==3) printf("Eskenar Ucgendir");
	if (ucg==2) printf("Ikizkenar Ucgendir");
	if (ucg==1) printf("Cesitkenar Ucgendir");
	return 0;
	
	//switch(ucg){
	//case 1: printf("Cesitkenar"); break;
	//case 2: printf("Ikizkenar"); break;
	//case 3: printf("Eskenar"); break;
//}
}