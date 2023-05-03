#include <stdio.h>
#include <math.h>
int usalma(int a, int b){
	int us_sonuc;
	us_sonuc=pow(a,b);
	printf("Sonuc: %d",us_sonuc);
	printf("\n");
	
	return us_sonuc;
}

int main(){
	int yeni_sonuc=usalma(3,4)+5;
	printf("Sonuc: %d",yeni_sonuc);
	return 0;
	
}