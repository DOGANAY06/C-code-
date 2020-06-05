#include <stdio.h>
#include <string.h>//bu kütüphaneyi strcmp fonksiyonu için kullandým çünkü string ifadeleri karþýlaþtýrma yapmam gerekiyordu kullaniciadi ve klavyeden girilen kullanýcý adý
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
	scanf("%s",&mykullaniciid); //klavyeden girilen deðerler
	printf("Kullanici sifreyi giriniz=");
	scanf("%d",&mypassword);
	if(strcmp(kullaniciid,mykullaniciid)==0 && mypassword==password) //klavyeden girilen kullanýcý adý ve tanýmlý kullanýcý adý eþitse ve sifre klavyeden girilen þifreye eþitse
 	{
		printf("Bankamiza hosgeldiniz\n");  //giriþ iþlemi baþarýlý olacal
		bankaislemleri(bakiye);   //tanimli bakiye bilgisi gönderilecek ve bankaiþlemleri fonksiyonu çalýþtýrýlacak
		break; //döngüyü bitirdik fonksiyona gittikten sonra;
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
			printf("\nKartiniz bloke olmuþtur");
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
	printf("Para yatýrma icin='+'\nPara cekme icin'-'\n,Bakiye gormek icin='*'\nCikmak icin='q' basiniz\n"); //hangi iþlemin yapilmasi gerektiði sorulacak
	scanf(" %c",&secenek); 
	int paramiktari;
	switch (secenek){ //secilen iþleme göre belirli parametreye gidilecek
		case '+':
			printf("Ne kadar para girmek istersiniz=");
			scanf("%d",&paramiktari);
			bakiye=paramiktari+bakiye;
			printf("\nYeni bakiyeniz=%d\nBaska bir islem yapmak istermisiniz herhangi bir tusa basiniz ",bakiye);
			scanf(" %c",&secenek);
			break; 
		case '-':
			printf("\nNe kadar para cekmek istersiniz=");  //para çekme iþleminde paramiktarý  
			scanf("%d",&paramiktari);
			if(paramiktari>bakiye){  //eðer para miktarý > bakiye den büyükse
				printf("Paraniz yetmiyor"); //para yetmicek iþlem gerçekleþtirilemeyecek
				printf("Bakiyeniz=%d\nBaska bir islem yapmak istermisiniz herhangi bir tusa basiniz",bakiye);
				scanf(" %c",&secenek); //baþka bir iþleme gitmek için
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
}while(secenek!='q'); //kullanýcý q ya baþana kadar döngü dönecek 
printf("\nKartiniz iade ediliyor"); //q ye baþtýðýnda döngü bitecek ve kart iade edilecek
}
