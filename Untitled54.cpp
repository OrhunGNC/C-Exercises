#include <stdio.h>
#include <math.h>

int main(){
	int sayi,k,enb;
	printf("Sayi: ");
	scanf("%d",&sayi);
	enb=0;
	while(sayi>0){
		k=sayi%10;
		sayi=sayi/10;
		if(enb<k) enb=k;
	}
	printf("En buyuk:%d",enb);
	return 0;
}