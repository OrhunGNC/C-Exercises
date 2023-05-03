#include <stdio.h>
#include <math.h>
float uslusayi(int x,int n){
	float sonuc;
	//int i;
	//float sonuc=1;
	//for(i=1;i<=n;i++){
	//	sonuc=sonuc*x;
	//}
	sonuc=pow(x,n);
	return(sonuc);
}
int main(){
	int i,n;
	float toplam=0;
	printf("N: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		toplam=toplam+(1/ uslusayi(i,3));
	}
	printf("Toplam=%f",toplam);
	return 0;
}