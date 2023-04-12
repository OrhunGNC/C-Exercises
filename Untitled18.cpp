#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
	int saat,dakika;
	float daci,saci,aci;
	printf("Saat :");
	scanf("%d",&saat);
	printf("Dakika :");
	scanf("%d",&dakika);
	daci=dakika*6;
	saci=saat*30+dakika*0.5;
	if (daci>saci){
		aci=daci-saci;
	}
	else aci=saci-daci;
	if (aci>180){
		aci=360-aci;
	}
	printf("Aci=%f",aci);
	return 0;
	
}