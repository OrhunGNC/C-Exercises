#include <stdio.h>
#include <math.h>

int main(){
	int x,y,a,b,c,i,obeb;
	printf("X: ");
	scanf("%d",&x);
	printf("Y: ");
	scanf("%d",&y);
	a=x;
	b=y;
	obeb=1;
	if(a>=b) c=a;
	if(b>=a) c=b;
	if(c>0){
		for(i=1;i<=c;i++){
			if(a%i==0 && b%i==0){
				obeb=i;
			}
		}
	}
	printf("X=%d\nY=%d\nOBEB=%d",x,y,obeb);

		return 0;
	}
	
