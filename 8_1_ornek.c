#include <stdio.h>
#include <string.h>
int main()
{
	printf("Sifremi degistir paneline hosgeldiniz=\n");
	char tanimliid[20]="dogan06"; //tanimli id 
	char tanimlisifre[20]="dogan0658"; //tan�ml� sifre 
	int hak;  //3 giriste sistem kapamacak onun i�in hak 
	char  kizliksoyadi[10]="CAN"; //sifre ve id dogru ise kullan�lacak
	char isim[10]="DOGAN"; //tan�ml� kullan�c� ismi
	char merhaba[10]="MERHABA "; //merhaba mesaj�
	char yenisifre[10]; //degisterecegimiz sifrenin tutulacagi yer
	while(hak<3){
	char kullaniciid[20]; //giris i�in kullanici id 
	char sifre[20];  //giris i�in sifre
	printf("Kullan�c� ad�n� giriniz="); 
	scanf("%s",&kullaniciid);
	printf("Sifrenizi giriniz=");
	scanf("%s",&sifre);
	strlwr(kullaniciid); //girilen kullanici id k�c�k harfe cevirdik
	strlwr(sifre); //girilen sifreyi k�c�k harfe cevirdik
	if(strcmp(tanimliid,kullaniciid)==0 && strcmp(tanimlisifre,sifre)==0){ //tanimli olan id  girilen id  ve girilen sifre tanimli sifreyi kar��la�t�rd�k 
		printf("Basarili giris=\n"); //dogru ise basarili bir giristir
		printf("%s hosgeldiniz=\n",strcat(merhaba, isim)); //kullanicinin ismini mesaj�m�zla birlikte yazd�rd�k
		do{
		char oncekisoyadi[10];  //soyad girisi i�in
		printf("Anne kizlik soyadinin uzunlugu=%d bunu dogru sekilde giriniz=\n",strlen(kizliksoyadi)); //tanimli olan k�zl�k soyad�n�n uzunlugunu g�sterdik
		scanf("%s",&oncekisoyadi); 
		strupr(oncekisoyadi); //kullan�c�dan ald�g�m�z k�zl�k soyad� degiskenini b�y�k harfle yazd�rd�k
		if(strcmp(kizliksoyadi,oncekisoyadi)==0) //eger tanimli kizlik soyadi ve girilen soyad  ayn� ise 
		{
			printf("Yeni sifrenizi giriniz"); //yeni sifre paneline gectik
			scanf("%s",&yenisifre);  
			printf("\nYeni sifreniz tanimlanmistir=%s\n",strcpy(tanimlisifre,yenisifre)); //yeni sifreyi tanimli sifremize kopyaladik
		}
		else
		{
			hak++;
			printf("Hatali soyadi girisi,kalan hak=%d\n",3-hak);
		}
	}while(hak==3);
	printf("Hatali kizlik soyadi girisi\n");
}
	else
	{
		hak++;
		printf("Hatali giris kalan hakkiniz=%d\n",3-hak);
	}
	}
	printf("Cikis yapilmistir");
}
