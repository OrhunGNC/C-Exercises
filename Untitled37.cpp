#include <stdio.h>
#include <math.h>

int main(){
	int n,b,l;
	printf("N: ");
	scanf("%d",&n);
	l=0;
	while(n>0){
		b=n%10;
		n=n/10;
		if (l<b){
			l=b;
		}
	}
	printf("En buyuk rakam=%d",l);
	return 0;
}