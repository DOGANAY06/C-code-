#include <stdio.h>
#include <string.h>
int main()
{
	printf("Sifremi degistir paneline hosgeldiniz=\n");
	char tanimliid[20]="dogan06"; //tanimli id 
	char tanimlisifre[20]="dogan0658"; //tanýmlý sifre 
	int hak;  //3 giriste sistem kapamacak onun için hak 
	char  kizliksoyadi[10]="CAN"; //sifre ve id dogru ise kullanýlacak
	char isim[10]="DOGAN"; //tanýmlý kullanýcý ismi
	char merhaba[10]="MERHABA "; //merhaba mesajý
	char yenisifre[10]; //degisterecegimiz sifrenin tutulacagi yer
	while(hak<3){
	char kullaniciid[20]; //giris için kullanici id 
	char sifre[20];  //giris için sifre
	printf("Kullanýcý adýný giriniz="); 
	scanf("%s",&kullaniciid);
	printf("Sifrenizi giriniz=");
	scanf("%s",&sifre);
	strlwr(kullaniciid); //girilen kullanici id kücük harfe cevirdik
	strlwr(sifre); //girilen sifreyi kücük harfe cevirdik
	if(strcmp(tanimliid,kullaniciid)==0 && strcmp(tanimlisifre,sifre)==0){ //tanimli olan id  girilen id  ve girilen sifre tanimli sifreyi karþýlaþtýrdýk 
		printf("Basarili giris=\n"); //dogru ise basarili bir giristir
		printf("%s hosgeldiniz=\n",strcat(merhaba, isim)); //kullanicinin ismini mesajýmýzla birlikte yazdýrdýk
		do{
		char oncekisoyadi[10];  //soyad girisi için
		printf("Anne kizlik soyadinin uzunlugu=%d bunu dogru sekilde giriniz=\n",strlen(kizliksoyadi)); //tanimli olan kýzlýk soyadýnýn uzunlugunu gösterdik
		scanf("%s",&oncekisoyadi); 
		strupr(oncekisoyadi); //kullanýcýdan aldýgýmýz kýzlýk soyadý degiskenini büyük harfle yazdýrdýk
		if(strcmp(kizliksoyadi,oncekisoyadi)==0) //eger tanimli kizlik soyadi ve girilen soyad  ayný ise 
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
