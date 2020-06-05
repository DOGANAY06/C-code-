#include <stdio.h>
#include <math.h>
int main()
{
	int sayi,sayi2;
	printf("Matematik kütüphanesi islemlerine hoþgeldiniz\n");
	int secim;
	do //döngü kurduk çünkü birden fazla iþlem yaptirmak istenebilir
	{
	printf("Islem yaptirmak istediginiz sayiyi giriniz="); 
	scanf("%d",&sayi);
	printf("\nSecim yapiniz\nMutlak deger=1\nKarekok hesabi icin=2\nUstunu alma=3\n Ln alma=4\n10 tabaninda log=5\nSinus hesaplama=6\nCosinus hesaplama=7\nTanjant hesaplama=8\nCotanjant hesaplama=9\nCikmak icin=0 basiniz=");
	scanf("%d",&secim);
		switch(secim)
		{
			case 1:
				printf("Sayinin mutlak degeri=%d\n",abs(sayi));
				break;
			case 2:
				printf("Sayinin karekok degeri=%0.2f\n",sqrt(sayi)); //deðerleri ekrana yazdýrýrken float kullandik cünkü bu fonksiyonlar float deger döndürür
				break;
			case 3:
				printf("Sayiyi giriniz=");
				scanf("%d",&sayi2);
				printf("Ussunu alma =%0.2f\n",pow(sayi,sayi2));
				break;
			case 4:
				printf("Ln sonucu=%0.2f\n",log(sayi));
				break;
			case 5:
				printf("Logaritma sonucu 10 tabaninda=%0.2f\n",log10(sayi));
				break;
			case 6:
				printf("Sinus hesaplama=%0.2f\n",sin(sayi));
				break;
			case 7:
				printf("Cosinus hesaplama=%0.2f\n",cos(sayi));
				break;
			case 8:
				printf("Tanjan hesaplama=%0.2f\n",tan(sayi));
				break;
			case 9:
				printf("Cotanjant hesaplama =%0.2f\n",1/tan(sayi));
				break;
			case 0:
				printf("Cikis islemi secildi\n");
				break;
			default:
				printf("Hatali islem denemesi tekrar deneyiniz");
				break;
		}
}while(secim!=0); //0 a baþýlmadýðý sürece döngü devam etsin.
	printf("Islemler tamamlanmistir kapatildi");
}
