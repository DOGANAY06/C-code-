#include <stdio.h>
#include <string.h> //memcpy fonksiyonu bu kütüphanede bulunur
#include <stdlib.h>  //malloc fonksiyonu bu kütüphanede bulunur

typedef struct urun
{
	char urun_adi[50];
	int gelis_fiyati;
	int satis_fiyati;
}urun;
void goster_urun( urun urun1);
void goster_urun2(urun *urun2);
int main()
{
	urun urun1;
	memcpy(urun1.urun_adi,"Firca",50); //bellege tanimli ürünü kopyaladýk
	urun1.gelis_fiyati=5;  //normal bir tanýmlama olduðu için . kullandýk
	urun1.satis_fiyati=10;
	goster_urun(urun1); //urunumuzu gostermek için fonksiyona gönderdik.
	urun *urun2;  //2.ürünümüzü tanýmladýk
	urun2=(urun*)malloc(sizeof(urun));    //hafýzada ikinci ürüne yer açtýk
	memcpy(urun2->urun_adi,"Kalem",50); 
	urun2->gelis_fiyati=2;
	urun2->satis_fiyati=5;
	goster_urun2(urun2); //ikinci ürünümüzü fonksiyona döndürdük
	return 0;
}
void goster_urun(urun urun1)   //ürün1 in gosterildiði fonksiyon
{
	printf("Tanimli Urun bilgisi\n");
	printf("Urun isim=%s\n",urun1.urun_adi);
	printf("Urun gelis fiyati=%d\n",urun1.gelis_fiyati);
	printf("Urun satis fiyati=%d\n",urun1.satis_fiyati);
}
void goster_urun2(urun *urun2) //ürün2 nin gösterildiði fonksiyon member ismini pointer olarak tanýmladýðýmýz için iþaretçi koyduk 
{
	printf("Tanimli Urun bilgisi\n");
	printf("Urun isim=%s\n",urun2->urun_adi); //ürünleri ekranda yazdýrmak için -> bunu kullandýk çünkü üyemiz pointer.
	printf("Urun gelis fiyati=%d\n",urun2->gelis_fiyati);
	printf("Urun satis fiyati=%d\n",urun2->satis_fiyati);
}
