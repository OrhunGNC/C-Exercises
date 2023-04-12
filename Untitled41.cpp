#include <stdio.h>
#include <math.h>

int main(){
	int i,n,j,kont,s;
	printf("N: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		kont=1;
		for(j=2;j<=10;j++){
			if((i%j) != (j-1)){
				kont=0;
			}
			
		}
		if(kont==1){
				printf("%d\n",i);
			}
	}
	return 0;
}