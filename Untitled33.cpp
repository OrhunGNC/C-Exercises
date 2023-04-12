#include <stdio.h>
#include <math.h>

int main(){
	int i,j,n;
	printf("N: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i+=1){
		for(j=1;j<=(n-i);j+=1){
			printf(" ");
		}
		for(j=1;j<=(i*2-1);j+=1){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}