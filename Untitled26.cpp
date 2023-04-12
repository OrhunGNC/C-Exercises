#include <stdio.h>
#include <math.h>

int sayi,tek,cift;

int main(){
	printf("Sayi giriniz:");
	scanf("%d",&sayi);
	if(sayi%2==0){
		goto cift;
	}
	else{
		goto tek;
	}
	cift:
		printf(" %d sayisi cifttir",sayi);
		return 0;
	tek:
		printf(" %d sayisi tektir",sayi);
		return 0;
	return 0;
}
		
		