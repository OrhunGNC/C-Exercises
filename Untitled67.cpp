#include <stdio.h>
#include <math.h>
float rakamtoplam(int sayi){
	int kalan,toplam;
	toplam=0;
	while(sayi>0){
		kalan=sayi%10;
		toplam=toplam+kalan;
		sayi=sayi/10;
	}
	return(toplam);
}
int main(){
	int sayi,toplam;
	printf("Sayi: ");
	scanf("%d",&sayi);
	toplam=rakamtoplam(sayi);
	printf("Rakamlari toplami = %d",toplam);
	return 0;
}