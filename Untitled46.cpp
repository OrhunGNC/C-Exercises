#include <stdio.h>
#include <math.h>

int main(){
	int i,dizi1[4],dizi2[4];
	printf("Birinci dizinin elemanlarini giriniz: ");
	for(i=0;i<4;i++){
		scanf("%d",&dizi1[i]);
	}
	printf("Ikinci dizinin elemanlarini giriniz: ");
	for(i=0;i<4;i++){
		scanf("%d",&dizi2[i]);
	}
	double dizi3[4];
	for(i=0;i<4;i++){
		dizi3[i]=(dizi1[i]*dizi2[i])/(dizi1[i]+dizi2[i]);
	}
	for(i=0;i<4;i++){
		printf("\n %f",dizi3[i]);
	}
	return 0;
}