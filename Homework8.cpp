#include <stdio.h>
#include <math.h>

int main(){
	int i,dizi[100],n,k,sonuc;
	printf("N: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Dizi[%d]=",i);
	    scanf("%d",&dizi[i]);
	}
	sonuc=0;
	k=0;
	for(i=0;i<=n-1;i++){
	if(dizi[i]>0){
		sonuc = sonuc + dizi[i];
		k=k+1;
	}
}
sonuc = sonuc/k;
printf("Sonuc = %d",sonuc);
return 0;

}