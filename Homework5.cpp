#include <stdio.h>
#include <math.h>

int main(){
	int sayi,n,i,j,toplam;
	toplam=2;
	printf("N: ");
	scanf("%d",&n);
	toplam=0;
	for(i=3;i<=n;i++){
		sayi=1;
	       for(j=2;j<i;j++){
	       	if(i%j ==0){
	       		sayi=0;
			   }
		   }
		   if(sayi==1){
		   	toplam += i;
		   }
	}
	printf("%d",toplam);
	return 0;
}