#include <stdio.h>
#include <math.h>
 int main(){
 	int n,k,toplam;
 	printf("N: ");
 	scanf("%d",&n);
 	toplam=0;
 	while(n>0){
 		k=n % 10;
 		n=n/10;
 		toplam=toplam+k;
	 }
	 printf("%d",toplam);
	 return 0;
 }