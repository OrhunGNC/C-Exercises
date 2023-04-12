#include <stdio.h>
#include <math.h>

int main(){
	int i,n=2;
	while(++n<30){
		i=1;
		while(++i<n)
		if (n%i==0)
	break;
	if (i==n)
		printf("%d\n",n);
	
	}
	
	return 0;
}