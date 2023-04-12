#include <stdio.h>
#include <math.h>

int main(){
	int i,baslangic,son;
	int toplam=0;
	float ort;
	printf("Baslangic degeri gir:");
	scanf("%d",&baslangic);
	printf("Son degeri gir:");
	scanf("%d",&son);
	
	for (i=baslangic+1;i<son;i++){
		toplam+=i;
		ort=(float)toplam/(son-baslangic-1);
	}
	printf("Toplam: %d\n",toplam);
	printf("Ortalama : %.2f",ort);
	return 0;
}