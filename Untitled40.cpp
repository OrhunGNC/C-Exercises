#include <stdio.h>
#include <math.h>

int main(){
	int i,n;
	printf("N: ");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		if(i%2==1)
			continue;
		printf("%d\n",i);
	}
	return 0;
		
}