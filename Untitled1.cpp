#include <stdio.h>

int main(){
	int a,b; //int a,b,toplam,cikarma,carpim,bolme
	float c,d,bolme,carpim;
	a=3,b=5,c=3.5,d=18.8;
	int toplam=a+b;
	int cikarma=a-b;
	carpim=b*c;
	bolme=d/c;
	printf(" a + b = %d  a-b=%d \n b*c=%f d/c=%f",toplam,cikarma,carpim,bolme); 
	//printf("What is Lorem Ipsum?\n"); 
	//printf("Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum."); 
	
	return 0;
}