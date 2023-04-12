#include <stdio.h>

int main(){
	float arasinav1,arasinav2,final,ortalama;
	printf("Ara Sinav 1 Notunu Giriniz :");
	scanf("%f", &arasinav1);

    printf("Ara Sinav 2 Notunu Giriniz :");
	scanf("%f", &arasinav2);
	
	printf("Final Notunu Giriniz :");
	scanf("%f", &final);
	ortalama=(arasinav1*0.3+arasinav2*0.3+final*0.4);
	printf("Notlarin Ortalamasi = %.3f",ortalama);
	return 0;
}