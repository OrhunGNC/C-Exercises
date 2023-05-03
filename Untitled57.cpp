#include <stdio.h>
int sonuc,sayi,sayi3,a,b,toplam;
int gerilimoku(){
	int gerilim=5;
	return gerilim;
}

int main(){
	a=gerilimoku();
	printf("Okunan gerilim degeri: %d V",a);
	return 0;
}
