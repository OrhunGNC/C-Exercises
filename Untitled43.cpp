#include <stdio.h>
#include <math.h>

int main(){
	int i,j,toplam,n,kont;
	printf("N Sayisini giriniz:");
	scanf("%d",&n);
	for(j=1;j<=n;j++){ 
	toplam=1;
	
		for(i=2;i<=j/2;i++){
		if ((j%i)==0){
			toplam=toplam+i;
		}
		else continue;
	}
     	if (toplam==j){
			printf("%d\n",j);
		}

	}
	return 0;
}