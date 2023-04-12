#include <stdio.h>
#include <math.h>
int a,b,n;

int arasindakisayilartoplami(int a,int b)
{
	int toplam=0;
	for(int i=a+1;i<b;i++){
		toplam=toplam+i;
	}
	return toplam;
}

int main(){
	int s=arasindakisayilartoplami(3,33);
	
	printf(" Sonuc: %d\n",s);
	
	return 0;
}