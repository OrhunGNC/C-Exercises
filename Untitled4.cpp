#include <stdio.h>

int hesapmakinesi(){
	float deger,value;
	char islem;
	
	printf("Birinci Sayiyi Giriniz :");
	scanf("%f", &deger);
	
	printf("Ikinci Sayiyi Giriniz :");
	scanf("%f", &value);
	
	printf("Islemi Seciniz :");
	scanf("%c", &islem);
	
	if(islem==value+deger){
		//toplam=value+deger
		printf("Sonuc = %f",islem);
	}
	//if (islem==-){
		//printf("Sonuc = %f",value-deger);
	//}
	
	
	

	            
	return 0;                 
}