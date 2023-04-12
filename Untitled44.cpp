#include <stdio.h>
#include <math.h>

int main(){
	int i,kont,sayi;
	printf("Sayiyi Giriniz: ");
	scanf("%d",&sayi);
	i=2;
	kont=1;
	while(i<=sayi/2 && kont==1){
		for(i=2;i<sayi;i++){
			if(sayi%i==0){
				kont=0;
			}
		}
	}
	if(kont==1){
		printf("%d Sayisi Asal Sayidir.\n",sayi);
	}
	else printf("%d Sayisi Asal Sayi Degildir.\n",sayi);
	return 0;
}