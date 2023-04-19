#include <stdio.h>
#include <math.h>

int main(){
	int k1,k2,k3,ucg;
	printf("Ucgenin 1.Kenari: ");
	scanf("%d",&k1);
	printf("Ucgenin 2.Kenari: ");
	scanf("%d",&k2);
	printf("Ucgenin 3.Kenari: ");
	scanf("%d",&k3);
	if(k1==k2 && k2==k3){
		ucg=3;
	}
	else{
		if(k1==k2 || k1==k3|| k2==k3){
			ucg=2;
		}
		else{
			ucg=1;
		}
	}
	if(ucg==3){
		printf("Eskenar Ucgendir");
	} 
	else if(ucg==2){
		printf("Ikizkenar Ucgendir");
	} 
	else if(ucg==1){
		printf("Cesitkenar Ucgendir");
	}
	return 0;
}