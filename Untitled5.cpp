#include <stdio.h>

float kortalama();

int main(){
	printf("Merhaba C++\n");
	
	float ortalama = kortalama();
	printf("ortalama:%.2f\n",ortalama);
	
	return 0;
}


float kortalama(){
	float arasinav1,arasinav2,final,ortalama;
	printf("Ara Sinav 1 Notu :");
	scanf("%f", &arasinav1);

    printf("Ara Sinav 2 Notuz :");
	scanf("%f", &arasinav2);
	
	printf("Final Notu :");
	scanf("%f", &final);
	ortalama=(arasinav1*0.3+arasinav2*0.3+final*0.4);
	
	return ortalama;
}