#include <stdio.h>
#include <math.h>
#define pi 3.14
int main(){
	float r, cevre, alan;
	printf("Yaricap:");
	scanf("%f",&r);
	cevre=2*pi*r;
	alan=pi*r*r;
	printf("Cevre:%f\n",cevre);
	printf("Alan:%f\n",alan);
	return 0;
}