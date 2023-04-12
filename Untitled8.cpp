#include <stdio.h>

int main(){
	int deger;
	float s2;
	
	printf("-----integerxfloat carpim programi-----\n");
	
	printf("integer giriniz:");
	scanf("%d", &deger);
	
	printf("float giriniz:");
	scanf("%f", &s2);
	
	printf("integerxfloat=%f\n", deger*s2);
	printf("integer/float=%f\n", deger/s2);
	
	printf("FLOAT SIZE: =%d byte hafizada yer kapliyor\n",sizeof(s2));
	printf("INT SIZE: =%d byte hafizada yer kapliyor\n",sizeof(deger));
	
	return (0);
}