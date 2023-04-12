#include <stdio.h>
#include <math.h>

int main(){
	int i,x,y,toplam;
	printf("X degerini giriniz:");
	scanf("%d",&x);
	printf("Y degerini giriniz:");
	scanf("%d",&y);
	toplam=0;
	for(i=1;i<=x;i++){
		toplam=toplam+y;
	}
	printf("%d*%d=%d",x,y,toplam);
	return 0;
}