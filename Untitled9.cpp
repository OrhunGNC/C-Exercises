#include <stdio.h>
int i=5; //global de�i�ken
int fonk1 (){
	printf("Sayi degeri 2:%d",i*5); //i yi program g�remeyecek
	return 0;
}
int main(){
	int i=5; //yerel de�i�ken
	printf("Sayi degeri 1:%d",i);
	fonk1();
	return 0;
}