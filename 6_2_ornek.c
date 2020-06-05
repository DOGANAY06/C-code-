#include <stdio.h>
int tekrarsayigirisi(int *sayi1,int *sayi2);
int main()
{
	char secenek;
	int sayi1,sayi2;
	printf("1.Sayiyi giriniz="); //sayi giriþlerini aldýk
	scanf("%d",&sayi1);
	printf("2.Sayiyi giriniz=");
	scanf("%d",&sayi2);
	int toplama,cikarma,carpma,mod;
	float bolme; 
	do
	{
		printf("Hangi islemi yapmak istersiniz\nToplama:+,Cikarma:-,Carpma:*,Bolme:/,Mod almak=%,Cikmak icin:q\n");  //iþlem seçimi yapýlý
		scanf(" %c",&secenek);
		switch(secenek) 
		{
			case '+': //toplama iþlemi ise buraya girer
				toplama=sayi1+sayi2;   //toplama iþlemi yapýlýr
				printf("Toplama islemi sonucu=%d\n",toplama);   //sonucu ekrana yazýlýr
				break;
			case '-': //cikarma islemi icin buraya girer
				cikarma=sayi1-sayi2;  //cikarma islemi yapýlýr
				printf("Cikarma  islemi sonucu=%d\n ",cikarma); //sonucu yazdýrýlýr
				break;
			case '*':
				carpma=sayi1*sayi2;   //carpma iþlemi yapýlýr
				printf("Carpma islemi sonucu=%d\n",carpma);   //carpma iþleminin sonucu
				break;
			case '/':
				if(sayi1>0 && sayi2>0)  //bolme islemi yapýlmasý için sayilarin 2 sininde 0 dan büyük olmasý gerekir
				{
					bolme=(float)sayi1/(float)sayi2;  //doðruysa bolme iþlemi yapýlýr 
					printf("Bolme islemi sonucu=%0.2f\n",bolme);  
					break;
				}
				else
				{
					printf("Sayi girisi paneline yonlendiriliyorsunuz"); //sayilarin 2 sinden biri 0 ya da 0 dan kücükse
					tekrarsayigirisi(&sayi1,&sayi2); //tekrar sayi girisi fonksiyonuna sayilar gonderilir
					bolme=(float)sayi1/(float)sayi2;  //gonderilen sayilar ondalik cinsinden tekrar isleme tabi tutulur
					printf("Bolme islemi sonucu=%0.2f",bolme); 
					break;
				}
			case '%':
				if(sayi1>0 && sayi2>0) //mod alma islemindede bolme isleminde olduðu gibi sayilarin 0 dan büyük olma þartý sorgulanýr
				{
					mod=sayi1%sayi2; //sayýlar 0 dan büyükse mod alma iþlemi yapýlýr
					printf("Kalan sonucu=%d\n",mod);
					break;
				}
				else
				{
					printf("Sayi girisi paneline yonlendiriliyorsunuz\n"); //sayilar 0 dan büyük deðilse
					tekrarsayigirisi(&sayi1,&sayi2); //sayilar tekrarsayigirisi fonksiyonuna gönderilir adresleriyle birlikte
					mod=sayi1%sayi2; //mod alma iþlemi yapýlýr 
					printf("Kalan sonucu=%d\n",mod); //kalan sonucu ekrana yazar
					break;
				}
			case 'q':
				printf("Hesap makinesinden cikis islemi secildi\n");  //hesap makinesinden çýkýþ iþlemi secilmiþtir
				break;
			default:
				printf("Yanlis bir tuslama dogru islemi seciniz:\n"); //tekrar tuþlama iþlemi döndürülür
		}
	}while(secenek!='q');   //çýkýþ iþlemi q tuþlanana kadar yani iþlem devam eder 
	printf("Hesap makinesi kapatildi");	 //q tuþlandýðýnda  hesap makinesi kapanýr
}
int tekrarsayigirisi(int *sayi1,int *sayi2) //tekrar sayi girisi fonksiyonumuza gelen sayilarý iþaret ettik
{
	int sayilar1,sayilar2; //sayi girisi için deðiþkenler atayýp sayi girisini aldýk
	printf("1.Sayiyi giriniz:");
	scanf("%d",&sayilar1);
	printf("2.Sayiyi giriniz:");
	scanf("%d",&sayilar2);
	*sayi1=sayilar1; //girilen sayilari iþaretli deðiþkenlere atarýz
	*sayi2=sayilar2; 
}
