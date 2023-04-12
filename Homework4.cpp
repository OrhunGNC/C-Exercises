#include <stdio.h>
#include <math.h>

int main(){
	int sayi,k,i,toplam;
	toplam=0;
	for(i=1;i<=9999;i++){
		toplam=0;
		sayi=i;
		while(sayi>0){
			k=sayi%10;
			toplam=toplam+k*k*k;
			sayi=sayi/10;	
		}
		if(toplam==i)
			{
				printf("%d\n",i);
			}	
	}
	return 0;
}