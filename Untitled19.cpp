#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
	float a,b,c,delta,bkare,x,x1,x2,dkarekok;
	printf("B degerini girin:");
	scanf("%f",&b);
	printf("A degerini girin:");
	scanf("%f",&a);
	printf("C degerini girin:");
	scanf("%f",&c);
	
	bkare=pow(b,2);
	
	delta=bkare-(4*a*c);
	
	dkarekok=sqrt(delta);
	

	
	if (delta ==0) {
	x=(-1*b)/(2*a);
	printf("%f",x);	
	}
	
	else{
		if (delta<0){
		printf("Reel Kok Yoktur");

	}

	else{
		x1=(-b-dkarekok)/(2*a);
	
	    x2=(-b+dkarekok)/(2*a);
		printf("X1:%f\n",x1);
		printf("X2:%f\n",x2);
}
	}
	
	return 0;
}