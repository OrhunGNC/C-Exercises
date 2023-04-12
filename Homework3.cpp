#include <stdio.h>
#include <math.h>

int main(){
	int n,i;
	float s;
	printf("N sayisini giriniz:");
	scanf("%d",&n);
	s=1.0;
	for(i=2;i<=n;i++){
		s=s+(1.0/i);
	}
	s=s*4;
	printf("S sayisi=%f",s);
	return 0;
}