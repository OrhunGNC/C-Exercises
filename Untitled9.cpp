#include <stdio.h>
int i=5; //global deðiþken
int fonk1 (){
	printf("Sayi degeri 2:%d",i*5); //i yi program göremeyecek
	return 0;
}
int main(){
	int i=5; //yerel deðiþken
	printf("Sayi degeri 1:%d",i);
	fonk1();
	return 0;
}