#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct  urun //ürünün özelliklerinin tutulduðu structýr
{
	char urunname[50];
	int gelis_fiyati;
	int satis_fiyati;
}urun;
typedef struct sirket{ //sirkete girilen ürünler
	char sirketname[50]; //sirketin ismi tek seferlik giriþ 
	urun  *urunler; //sirkete gelen ürünleri iþaretlettik
	int sayi; //sirkette kaç tane ürün olacaðý bilgisi
}sirket;
void urun_ekle(urun *urunum); //urun etiketli structýrýmýzý urunum de iþaretledik 
void urunleri_goster(sirket *urunum); //sirketimize urunum adlý iþaretciyi gönderdik
int main()
{
	int adet,i=0;
	printf("Kac adet urun girmek istersiniz="); 
	scanf("%d",&adet);
	sirket *sirketim; //sirketimiz structýrýna sirketimi tanimladik
	sirketim=(sirket*)malloc(sizeof(sirket)*adet); //sirketime girilen ürün adeti kadar yer ayýrdýk
	sirketim->sayi=adet;  //sayi degiskenimize yolladik girilen ürün sayýsýný 
	sirketim->urunler=(urun*)malloc(sizeof(urun)*adet);  //ürünler structýrýmýzdaki ürün özellikleri kadar yer ayýrdýk ürünler e
	printf("Sirket ismini giriniz=");
	fflush(stdin); //peþ peþe string ifadelerde kullanýcýdan almak için 
	gets(sirketim->sirketname);//sirketime sirketismini kullanicidan aldýk
	for(i=0;i<adet;i++)
	{
		urun_ekle(&(sirketim->urunler[i])); //sirketimin içinde bulunan urunler iþaretcisini döngüye soktuk her ürün giriþi ve özellikleri için 
	}
	urunleri_goster(sirketim);
	return 0;
}
void urun_goster(urun *malzemeler) //girilen her urun structýrýmýzýn ürün özelliðini  malzemeler  iþaretcisiyle ekrana yazdýrdýk
{
	printf("\nUrun bilgisi=");
	printf("\nUrun ismi=%s",malzemeler->urunname);
	printf("\nUrun gelis fiyati=%d TL",malzemeler->gelis_fiyati);
	printf("\nUrun satis fiyati=%d TL",malzemeler->satis_fiyati);
	printf("\nUrun kazanc=%d TL",((malzemeler->satis_fiyati)-(malzemeler->gelis_fiyati)));
	
}
void urunleri_goster(sirket *urunum)  //girilen ürünleri göstermek için 
{
	int i;
	for(i=0;i<urunum->sayi;i++) //urunumun içinde kaç tane ürün varsa döngü o kadar dönecek
	{
		urun_goster(&(urunum->urunler[i])); //herbir ürün özelliði için urun_goster fonksiyonuna gittik
	}
}
void urun_ekle(urun *urunum) //urun etiketli structýrýmýzý urunum de iþaretledik 
{
	printf("Urun ismini giriniz\n");
	fflush(stdin);
	gets(urunum->urunname);
	printf("Urun gelis fiyati\n");
	scanf("%d",&urunum->gelis_fiyati);
	printf("Urun satis fiyati\n");
	scanf("%d",&urunum->satis_fiyati);
}
