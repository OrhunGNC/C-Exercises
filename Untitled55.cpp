#include <stdio.h>
void yaz(int a, int b){
	printf("%d %d\n",a,b);
}
int main(){
	int x,y;
	x=5;
	y=7;
	yaz(x,y);
	yaz(x+5,y+x);
	return 0;
}