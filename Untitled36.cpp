#include <stdio.h>
#include <math.h>

int main(){
	int i,k,l,s;
	for(i=1000;i<=9999;i++){
		k=i/100;
		l=i%100;
		s=(k*k)+(l*l);
		if (i==s){
		printf("%d\n",i);
	}
	}
	
	return 0;
}