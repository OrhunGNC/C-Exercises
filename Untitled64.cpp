#include <stdio.h>
#include <math.h>

float islem(float x){
	float sonuc;
	sonuc=5*x/(1+x*x);
	return(sonuc);
}
int main(){
	
	float x,f,toplam=0;
	for(x=0;x<=5;x+=0.2){
		f=islem(x);
		printf("f(%.2f)= %.2f\n",x,f);
		toplam=toplam+f;
	}
	printf("Toplam: %f",toplam);
	return 0;
}