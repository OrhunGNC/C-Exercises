#include <stdio.h>
int main(){
	
	
	int a=50;
	int b=30;
	int x,y;
	x=a++;
	y=++b;
	
	printf("x sayisi: %d\n",x);
	printf("y sayisi: %d\n",y);
	printf("a sayisi: %d\n",a);
	printf("b sayisi: %d\n",b);
	return 0;
}