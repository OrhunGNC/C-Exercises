#include <stdio.h>
#include <math.h>

int main(){
	int i,sayi;
	int faktoriyel=1;
	
	baslat:
		printf("Sayi Giriniz:");
		scanf("%d",&sayi);
		
		if(sayi>0)
		for(i=1;i<=sayi;i++){
			faktoriyel=faktoriyel*i;
		
		}
		else{
			printf("Negatif sayi girdiniz....\n");
			printf("Lutfen pozitif bir tamsayi giriniz....\n");
			goto baslat;
		}
		printf("Sonuc: %d",faktoriyel);
		return 0;
}