#include <stdio.h>

void P1(int x,int y){
	x=x+1;
	y=y+x;
	int z=x+y;
	printf("%d\n",z);
}
void P2(int a,int b,int c){
	int s=0;
	int i;
	for(i=1;i<=a;i++){
		s=(b*c)+s;
	}
	P1(a,s);
}
int main(){
	int k=3;
	int l=2;
	P1(k,l);
	P2(k,l,k+l);
	return 0;
}