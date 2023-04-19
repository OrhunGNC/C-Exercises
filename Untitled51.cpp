#include <stdio.h>
#include <math.h>

int main(){
	int n,i,toplam,a;
	float ortalama;
	printf("N: ");
	scanf("%d",&n);
	toplam=0;
	
	for(i=1;i<=n;i++){
		if(i%2==0){
			toplam=toplam+i;
			
			}	
		}
	printf("%d\n",toplam);
	return 0;
}