#include <stdio.h>
#include <string.h>//bu k�t�phaneyi strcmp fonksiyonu i�in kulland�m ��nk� string ifadeleri kar��la�t�rma yapmam gerekiyordu kullaniciadi ve klavyeden girilen kullan�c� ad�
int bankaislemleri(int bakiye); 
int main()
{
	int hak=0;
	char kullaniciid[15]="dogan"; //tanimli kullanici
	int password=12345;
	char mykullaniciid[15];
	int mypassword;
	int bakiye=2000;
	while(1){
	printf("Kullanici adini giriniz=");
	scanf("%s",&mykullaniciid); //klavyeden girilen de�erler
	printf("Kullanici sifreyi giriniz=");
	scanf("%d",&mypassword);
	if(strcmp(kullaniciid,mykullaniciid)==0 && mypassword==password) //klavyeden girilen kullan�c� ad� ve tan�ml� kullan�c� ad� e�itse ve sifre klavyeden girilen �ifreye e�itse
 	{
		printf("Bankamiza hosgeldiniz\n");  //giri� i�lemi ba�ar�l� olacal
		bankaislemleri(bakiye);   //tanimli bakiye bilgisi g�nderilecek ve bankai�lemleri fonksiyonu �al��t�r�lacak
		break; //d�ng�y� bitirdik fonksiyona gittikten sonra;
	}
	else if(strcmp(kullaniciid,mykullaniciid)==0 || mypassword==password)
	{
		printf("Kullanici adi ya da password hatali\n");
	}
	else
	{
		printf("Hatali giris");
		hak++;
		if(hak>=3)
		{
			printf("\nKartiniz bloke olmu�tur");
			break;
		}
		else
		{
			printf("\nLutfen tekrar deneyiniz kalan hak=%d\n",3-hak);
		}
	}
}
}
int bankaislemleri(int bakiye)
{
	char secenek;
	do{
	printf("Para yat�rma icin='+'\nPara cekme icin'-'\n,Bakiye gormek icin='*'\nCikmak icin='q' basiniz\n"); //hangi i�lemin yapilmasi gerekti�i sorulacak
	scanf(" %c",&secenek); 
	int paramiktari;
	switch (secenek){ //secilen i�leme g�re belirli parametreye gidilecek
		case '+':
			printf("Ne kadar para girmek istersiniz=");
			scanf("%d",&paramiktari);
			bakiye=paramiktari+bakiye;
			printf("\nYeni bakiyeniz=%d\nBaska bir islem yapmak istermisiniz herhangi bir tusa basiniz ",bakiye);
			scanf(" %c",&secenek);
			break; 
		case '-':
			printf("\nNe kadar para cekmek istersiniz=");  //para �ekme i�leminde paramiktar�  
			scanf("%d",&paramiktari);
			if(paramiktari>bakiye){  //e�er para miktar� > bakiye den b�y�kse
				printf("Paraniz yetmiyor"); //para yetmicek i�lem ger�ekle�tirilemeyecek
				printf("Bakiyeniz=%d\nBaska bir islem yapmak istermisiniz herhangi bir tusa basiniz",bakiye);
				scanf(" %c",&secenek); //ba�ka bir i�leme gitmek i�in
			}
			else{
			bakiye=bakiye-paramiktari;
			printf("Yeni bakiyeniz=%d\nBaska bir islem yapmak istermisiniz herhangi bir tusa basiniz",bakiye);
			scanf(" %c",&secenek);
		}
			break;
		case '*':
			printf("Bakiyeniz=%d",bakiye);
			printf("\nBaska bir islem yapmak istermisiniz herhangi bir tusa basiniz ",bakiye);
			scanf(" %c",&secenek);
			break;
		case 'q':
			printf("Cikis islemi secilmistir");
			break;
		default:
			printf("Hatali secim tekrar deneyiniz");
			printf("Baska bir islem yapmak istermisiniz herhangi bir tusa basiniz");
			scanf(" %c",&secenek);
			break;
	}
}while(secenek!='q'); //kullan�c� q ya ba�ana kadar d�ng� d�necek 
printf("\nKartiniz iade ediliyor"); //q ye ba�t���nda d�ng� bitecek ve kart iade edilecek
}
