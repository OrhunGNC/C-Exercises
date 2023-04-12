#include <stdio.h>
#include <math.h>

int main(){
	int i,n,toplam;
	printf("n sayisini giriniz:");
	scanf("%d",&n);
	toplam=0;
	
	for(i=1;i<=n;i++){
		toplam=toplam+pow(i,2);
	}
	printf("Toplam:%d",toplam);
	return 0;
	
}                           