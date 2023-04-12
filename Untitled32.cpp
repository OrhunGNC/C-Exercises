#include <stdio.h>
#include <math.h>

int main(){
	int i,j,n;
	printf("N: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=i;j>=1;j-=1){
			printf("%2d",i);
		}
		printf("\n");
	}
	return 0;
}