#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct  urun //�r�n�n �zelliklerinin tutuldu�u struct�r
{
	char urunname[50];
	int gelis_fiyati;
	int satis_fiyati;
}urun;
typedef struct sirket{ //sirkete girilen �r�nler
	char sirketname[50]; //sirketin ismi tek seferlik giri� 
	urun  *urunler; //sirkete gelen �r�nleri i�aretlettik
	int sayi; //sirkette ka� tane �r�n olaca�� bilgisi
}sirket;
void urun_ekle(urun *urunum); //urun etiketli struct�r�m�z� urunum de i�aretledik 
void urunleri_goster(sirket *urunum); //sirketimize urunum adl� i�aretciyi g�nderdik
int main()
{
	int adet,i=0;
	printf("Kac adet urun girmek istersiniz="); 
	scanf("%d",&adet);
	sirket *sirketim; //sirketimiz struct�r�na sirketimi tanimladik
	sirketim=(sirket*)malloc(sizeof(sirket)*adet); //sirketime girilen �r�n adeti kadar yer ay�rd�k
	sirketim->sayi=adet;  //sayi degiskenimize yolladik girilen �r�n say�s�n� 
	sirketim->urunler=(urun*)malloc(sizeof(urun)*adet);  //�r�nler struct�r�m�zdaki �r�n �zellikleri kadar yer ay�rd�k �r�nler e
	printf("Sirket ismini giriniz=");
	fflush(stdin); //pe� pe�e string ifadelerde kullan�c�dan almak i�in 
	gets(sirketim->sirketname);//sirketime sirketismini kullanicidan ald�k
	for(i=0;i<adet;i++)
	{
		urun_ekle(&(sirketim->urunler[i])); //sirketimin i�inde bulunan urunler i�aretcisini d�ng�ye soktuk her �r�n giri�i ve �zellikleri i�in 
	}
	urunleri_goster(sirketim);
	return 0;
}
void urun_goster(urun *malzemeler) //girilen her urun struct�r�m�z�n �r�n �zelli�ini  malzemeler  i�aretcisiyle ekrana yazd�rd�k
{
	printf("\nUrun bilgisi=");
	printf("\nUrun ismi=%s",malzemeler->urunname);
	printf("\nUrun gelis fiyati=%d TL",malzemeler->gelis_fiyati);
	printf("\nUrun satis fiyati=%d TL",malzemeler->satis_fiyati);
	printf("\nUrun kazanc=%d TL",((malzemeler->satis_fiyati)-(malzemeler->gelis_fiyati)));
	
}
void urunleri_goster(sirket *urunum)  //girilen �r�nleri g�stermek i�in 
{
	int i;
	for(i=0;i<urunum->sayi;i++) //urunumun i�inde ka� tane �r�n varsa d�ng� o kadar d�necek
	{
		urun_goster(&(urunum->urunler[i])); //herbir �r�n �zelli�i i�in urun_goster fonksiyonuna gittik
	}
}
void urun_ekle(urun *urunum) //urun etiketli struct�r�m�z� urunum de i�aretledik 
{
	printf("Urun ismini giriniz\n");
	fflush(stdin);
	gets(urunum->urunname);
	printf("Urun gelis fiyati\n");
	scanf("%d",&urunum->gelis_fiyati);
	printf("Urun satis fiyati\n");
	scanf("%d",&urunum->satis_fiyati);
}
