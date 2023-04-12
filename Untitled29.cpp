#include <stdio.h>
#include <math.h>

int main(){
	int n,i;
	float toplam;
	printf("N:");
	scanf("%d",&n);
	toplam=0;
	for(i=1;i<=n;i+=2){
		toplam=toplam+(i*i);
	}
	printf("Karekoku: %f",(float)sqrt(toplam));
	return 0;
}