#include <stdio.h>
#include <math.h>
#include <locale.h>


int main(){
	int x,y,z,enb;
	printf("X :"); 
	scanf("%d",&x);
	printf("Y :"); 
	scanf("%d",&y);
	printf("Z :"); 
	scanf("%d",&z);
	
	if(x>y && x>z)
	enb=x;
	else{
		if(y>z) enb=y;
		else enb=z;
	}
	printf("En Buyuk :%d\n",enb);
	printf("En Buyugun Karesi:%f\n",pow(enb,2));
	printf("En Buyugun Karekoku:%f",sqrt(enb));
	return 0;
}