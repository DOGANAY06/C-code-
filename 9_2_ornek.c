#include <stdio.h>
#include <math.h>
float sayiyuvarlama(float sayi1);
int main()
{
	float sayi1;
	printf("Ondalikli sayiyi giriniz=");
	scanf("%f",&sayi1);
	sayiyuvarlama(sayi1); //fonksiyona girilen sayiyi girip döndürdük iþlemi
}
float sayiyuvarlama(float sayi) //float bir fonksiyon oluþturduk çünkü  sayimiz float ve geri döndürülecek sonuç deðeride floattýr.
{
	int secim;
	printf("Sayiyi kucuk degere yuvarlamak icin=1\nBuyuk degere yuvarlamak icin=2\n");
	scanf("%d",&secim);
	if(secim==1)
	{
		printf("Sayinin kucuge yuvarlanmasi=%0.2f",floor(sayi));
	}
	else if(secim==2)
	{
		printf("Sayinin buyuge yuvarlanmasi=%0.2f",ceil(sayi));
	}
	else
	printf("Hatali giris tekrar seciminizi yapiniz");
	
}
