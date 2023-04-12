#include <stdio.h>

int main(){
float s1,s2;
float toplam,ortalama;

printf("Bir Sayi Giriniz:");
scanf("%f",&s1);
printf("İkinci Sayiyi Giriniz:");
scanf("%f",&s2);
toplam= s1+s2;
ortalama=toplam/2;
printf("Sayilarin Toplami:%.2.f\n",toplam);
printf("Ortalama Degeri:%.2f\n",ortalama);
return 0;
}
