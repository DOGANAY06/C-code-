#include <stdio.h>
int tekrarsayigirisi(int *sayi1,int *sayi2);
int main()
{
	char secenek;
	int sayi1,sayi2;
	printf("1.Sayiyi giriniz="); //sayi giri�lerini ald�k
	scanf("%d",&sayi1);
	printf("2.Sayiyi giriniz=");
	scanf("%d",&sayi2);
	int toplama,cikarma,carpma,mod;
	float bolme; 
	do
	{
		printf("Hangi islemi yapmak istersiniz\nToplama:+,Cikarma:-,Carpma:*,Bolme:/,Mod almak=%,Cikmak icin:q\n");  //i�lem se�imi yap�l�
		scanf(" %c",&secenek);
		switch(secenek) 
		{
			case '+': //toplama i�lemi ise buraya girer
				toplama=sayi1+sayi2;   //toplama i�lemi yap�l�r
				printf("Toplama islemi sonucu=%d\n",toplama);   //sonucu ekrana yaz�l�r
				break;
			case '-': //cikarma islemi icin buraya girer
				cikarma=sayi1-sayi2;  //cikarma islemi yap�l�r
				printf("Cikarma  islemi sonucu=%d\n ",cikarma); //sonucu yazd�r�l�r
				break;
			case '*':
				carpma=sayi1*sayi2;   //carpma i�lemi yap�l�r
				printf("Carpma islemi sonucu=%d\n",carpma);   //carpma i�leminin sonucu
				break;
			case '/':
				if(sayi1>0 && sayi2>0)  //bolme islemi yap�lmas� i�in sayilarin 2 sininde 0 dan b�y�k olmas� gerekir
				{
					bolme=(float)sayi1/(float)sayi2;  //do�ruysa bolme i�lemi yap�l�r 
					printf("Bolme islemi sonucu=%0.2f\n",bolme);  
					break;
				}
				else
				{
					printf("Sayi girisi paneline yonlendiriliyorsunuz"); //sayilarin 2 sinden biri 0 ya da 0 dan k�c�kse
					tekrarsayigirisi(&sayi1,&sayi2); //tekrar sayi girisi fonksiyonuna sayilar gonderilir
					bolme=(float)sayi1/(float)sayi2;  //gonderilen sayilar ondalik cinsinden tekrar isleme tabi tutulur
					printf("Bolme islemi sonucu=%0.2f",bolme); 
					break;
				}
			case '%':
				if(sayi1>0 && sayi2>0) //mod alma islemindede bolme isleminde oldu�u gibi sayilarin 0 dan b�y�k olma �art� sorgulan�r
				{
					mod=sayi1%sayi2; //say�lar 0 dan b�y�kse mod alma i�lemi yap�l�r
					printf("Kalan sonucu=%d\n",mod);
					break;
				}
				else
				{
					printf("Sayi girisi paneline yonlendiriliyorsunuz\n"); //sayilar 0 dan b�y�k de�ilse
					tekrarsayigirisi(&sayi1,&sayi2); //sayilar tekrarsayigirisi fonksiyonuna g�nderilir adresleriyle birlikte
					mod=sayi1%sayi2; //mod alma i�lemi yap�l�r 
					printf("Kalan sonucu=%d\n",mod); //kalan sonucu ekrana yazar
					break;
				}
			case 'q':
				printf("Hesap makinesinden cikis islemi secildi\n");  //hesap makinesinden ��k�� i�lemi secilmi�tir
				break;
			default:
				printf("Yanlis bir tuslama dogru islemi seciniz:\n"); //tekrar tu�lama i�lemi d�nd�r�l�r
		}
	}while(secenek!='q');   //��k�� i�lemi q tu�lanana kadar yani i�lem devam eder 
	printf("Hesap makinesi kapatildi");	 //q tu�land���nda  hesap makinesi kapan�r
}
int tekrarsayigirisi(int *sayi1,int *sayi2) //tekrar sayi girisi fonksiyonumuza gelen sayilar� i�aret ettik
{
	int sayilar1,sayilar2; //sayi girisi i�in de�i�kenler atay�p sayi girisini ald�k
	printf("1.Sayiyi giriniz:");
	scanf("%d",&sayilar1);
	printf("2.Sayiyi giriniz:");
	scanf("%d",&sayilar2);
	*sayi1=sayilar1; //girilen sayilari i�aretli de�i�kenlere atar�z
	*sayi2=sayilar2; 
}
