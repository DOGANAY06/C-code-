#include <stdio.h>
#include <string.h>
int main()
{
	char metin[53],cumle[23];
    char *sonuclar; //girilen kelimenin bulundugu yeri i�aret etmek i�in kulland�k
    int secim; //secim yapmak i�in
    char *bas,*son; //bas son karakterlerinin tutuldugu yeri i�aret etmek i�in tan�mladik
    char basi,sonu; //bas ve sondaki aratmak istedigimiz harf girisi i�in
    printf("Aratmak istediginiz metni giriniz=");  
    gets(metin); //bosluk karakterini de dahil ederek  metini almak i�in 
    do{
    printf("\nKelime aramasi icin=1\nHarf aramak icin=2\nTers cevirmek icin=3\nCikmak icin:4 basiniz=");
    scanf("%d",&secim);
    switch(secim)  
    {
	   case 1: //secim 1 se  kelime aramas� 
		printf("Aramak istediginiz kelimeyi giriniz=");
		scanf("%s",&cumle);
		sonuclar=strstr(metin,cumle);  //aranan metin ve arayan kelime degiskenleri 
		printf("Aranan kelime=%s\n",sonuclar); 
		break;
		case 2:
			printf("\nAratmak istediginiz harf bas icin");
			scanf(" %c",&basi);
			bas=strchr(metin,basi); //aranan metin ve kelimenin basindan itibaren aranan karakter
			printf("\nAranan bastan basliyarak pozisyon=%d\n",bas-metin+1);
			printf("\nAratmak istediginiz harf sondan bakmak icin");
			scanf(" %c",&sonu); 
			son=strrchr(metin,sonu); //right sagdan basl�yarak ara anlam�na gelir bunun i�in cift r kullandik kelimenin sonundan itibaren
			printf("Aranan sondan basliyarak pozisyon=%d\n",son-metin+1);
			break;
		case 3:
			printf("Metin ters cevirilecek\n");
			printf("\n%s",strrev(metin)); //metni ters cevirme i�in gerekli fonksiyon 
			break;
		case 4:
			printf("Cikis secildi\n");  //cikis islemi secildi�ini s�yler
			break;
		default:
			printf("Tekrar secim yapiniz\n"); //4 secimden biri degilse dond� d�ner 
	}
}while(secim!=4); //4 e bas�lmad�g� s�rece d�ner 
	printf("Program kapatildi"); //basilirsa d�ng� durur program kapanir
	return 0;
}
