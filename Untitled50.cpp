#include <stdio.h>
#include <math.h>

int main(){
	int n,i,toplam,k,a;
	float ortalama;
	printf("N: ");
	scanf("%d",&n);
	toplam=0;
	k=0;
	
	for(i=1;i<=n;i++){
		printf("%d. Sayiyi giriniz: ",i);
		scanf("%d",&a);
		if(a>0){
			toplam=toplam+a;
			k=k+1;
			}	
		}
		ortalama=(toplam/k);
	printf("%d\n",toplam);
	printf("%f",ortalama);
	return 0;
}