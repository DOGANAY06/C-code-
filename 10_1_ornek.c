#include <stdio.h>
#include <string.h> //memcpy fonksiyonu bu k�t�phanede bulunur
#include <stdlib.h>  //malloc fonksiyonu bu k�t�phanede bulunur

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
	memcpy(urun1.urun_adi,"Firca",50); //bellege tanimli �r�n� kopyalad�k
	urun1.gelis_fiyati=5;  //normal bir tan�mlama oldu�u i�in . kulland�k
	urun1.satis_fiyati=10;
	goster_urun(urun1); //urunumuzu gostermek i�in fonksiyona g�nderdik.
	urun *urun2;  //2.�r�n�m�z� tan�mlad�k
	urun2=(urun*)malloc(sizeof(urun));    //haf�zada ikinci �r�ne yer a�t�k
	memcpy(urun2->urun_adi,"Kalem",50); 
	urun2->gelis_fiyati=2;
	urun2->satis_fiyati=5;
	goster_urun2(urun2); //ikinci �r�n�m�z� fonksiyona d�nd�rd�k
	return 0;
}
void goster_urun(urun urun1)   //�r�n1 in gosterildi�i fonksiyon
{
	printf("Tanimli Urun bilgisi\n");
	printf("Urun isim=%s\n",urun1.urun_adi);
	printf("Urun gelis fiyati=%d\n",urun1.gelis_fiyati);
	printf("Urun satis fiyati=%d\n",urun1.satis_fiyati);
}
void goster_urun2(urun *urun2) //�r�n2 nin g�sterildi�i fonksiyon member ismini pointer olarak tan�mlad���m�z i�in i�aret�i koyduk 
{
	printf("Tanimli Urun bilgisi\n");
	printf("Urun isim=%s\n",urun2->urun_adi); //�r�nleri ekranda yazd�rmak i�in -> bunu kulland�k ��nk� �yemiz pointer.
	printf("Urun gelis fiyati=%d\n",urun2->gelis_fiyati);
	printf("Urun satis fiyati=%d\n",urun2->satis_fiyati);
}
