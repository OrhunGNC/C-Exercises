#include <stdio.h>
#include <math.h>

int main(){
	int i,n,sonuc;
	printf("N: ");
	scanf("%d",&n);
	sonuc=0;
	//i=1;
	for(i=1;i<=n;i+=2){
		sonuc=sonuc+i;
	}
	//while(i<=n){
	//	sonuc=sonuc+i;
		//i=i+2;
	//}
	printf("Sonuc=%d",sonuc);
	return 0;
}