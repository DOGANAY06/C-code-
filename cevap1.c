#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct personel //personel structýrým
{
	int  numara;
	char ad_soyad[25];
	char bolum[15];
	char adres[25];
	int maas;
}personel;

void kayit_ekle(personel *person);  //kayitlarimizin structýra eklendiði fonksiyon
void kayit_ekle_dosyaya(personel ekle); //kayitlarýmýzýn structýrdan dosyaya eklendiði fonksiyon
void kayit_ara(int personel_numara);  //kayitlarin dosyadan okunup eþlesen kayitla ekrana yazdýrýldýðý fonksiyon
void kayit_degistir(int personel_numara);  //kayitlarin önce okunup sonra eþlesen kayitla deðiþtirilme iþleminin yapýldýðý fonksiyon
int main()
{
	printf("Calisanlar veri tabanina hosgeldiniz\n");
	struct personel *personeller;
	int personel_numara;
	int secim;
		do  //döngü tanýmladým  çünkü secim iþlemi istenen deðere kadar devam etmesini istiyorum
	{
		printf("Hangi islemi yapmak istersiniz\nYeni kayit ekle=1\nKayit Ara=2\nKayit degistir=3\nCikis=4 icin basiniz\n");
		scanf("%d",&secim);
		switch(secim)
		{
			case 1: //kayit ekleme seceneðidir
			personeller=(personel*)malloc(sizeof(personel)); //her personel için hafýzada yer açýcak
			if(personeller==NULL)
			{
				printf("Hafizada yer acilamadi");
			}
			else{
			kayit_ekle(&personeller[0]);  //personellerimizin structýra eklendiði bölüm
			kayit_ekle_dosyaya(personeller[0]); //personellerimiz dosyaya eklendiði fonksiyon
			break;
			}
			case 2:
			printf("Aramak istediginiz personel numarasini giriniz=\n"); //personel aratmak için gerekli numara
			scanf("%u",&personel_numara);  //unsigned yaptým çünkü - li bir deðer giremez
			kayit_ara(personel_numara); //fonksiyonuma personel_numara parametresini gönderdim çünkü karþýlaþtýrma yapýcam
			break;
			case 3:
				printf("Degistirmek istediginiz kisinin personel numarasini giriniz=\n"); 
				scanf("%u",&personel_numara); 
				kayit_degistir(personel_numara); //kullanicidan alýnan personel numara bilgisini kayit deðiþtir fonksiyonuna gönderdim karþýlaþtýrma yapmak için
				break;
			case 4:
				printf("Cikis islemi secildi=\n");
				break;
			default:
				printf("Hatali secim tekrar deneyiniz\n");
				break;
		}
	}while(secim!=4); //4 e basýlmadýðý taktirde döngü devam etsin
	printf("Calisanlar veri tabani kapatildi\n");
	free(personeller); //hafýzadaki yer boþaltýyoruz
	return 0;
}


void kayit_ekle(personel *person) //structýrýmaza personel deðerlerimiz yazýlaak  pointer olarak yazýlacak hafýzada tutulmasi için ve dinamik dizidir
{
	printf("Bilgi ekleme bolumu\n");
    printf("Personel numarayi giriniz\n");
    scanf("%d",&person->numara);
    printf("Personel ad ve soyadi giriniz\n");
    fflush(stdin); //bir sonraki deðer alma iþlemine geçmesin diye tamponu temizledim
    gets(person->ad_soyad);
    printf("Personel calistigi bolumu giriniz\n");
    gets(person->bolum);
    printf("Personel adresi giriniz\n");
    gets(person->adres);
    printf("Personel maasi giriniz\n");
    scanf("%d",&person->maas);
}
void kayit_ekle_dosyaya(personel ekle)  //personel structýrýmýza yazýlan veriler eklenecek dosyaya 
{
	FILE *ekleme; 
    if ((ekleme=fopen("personeller.dat","ab"))==NULL) //dosya oluþturup kontrol ettirdim  ab dosya açma metodu ile açtým çünkü açýp ekleme yapmasýnýda istiyorým
    {
        printf("Dosya acilmadi hafýzada yer yok");
    }
    else
    {
    	fwrite(&ekle,sizeof(struct personel),1,ekleme); //dosyaya structýrýmýn ekledim baþtan baþlayarak
    	printf("Ekleme islemi basari ile gerceklestirildi\n");
        fclose(ekleme);
    }
}
void kayit_ara(int personel_numara)
{
	struct personel okunacak; //okunacak structýmýzý oluþturduk
	FILE *oku; 
	if ((oku=fopen("personeller.dat","rb"))==NULL) //oluþtuduðum dosyayý rb dosya açma metodu ile varsa okuttum yoksa buraya girdi 
    {
        printf("Dosya acilmadi hafýzada yer yok"); 
    }
    else
    {
    	fseek(oku,0,SEEK_SET); //dosyanýn 0 konumundan ve baþýndan baþla konum her zaman arama iþlemi için 0 dan baþlýcaðý için 2 kayit 1 kere veri bulunamadi döndürür.
    	while(fread(&okunacak,sizeof(struct personel),1,oku)) //oku dosyanýn boyutuna kadar 
    	if(personel_numara==okunacak.numara) //eger okunan deðerlerdeki numara bilgisi  kullanýcýnýn girdiði  numara ile ayný ise 
        {
            printf("Numara=%d\nAd soyad=%s\nBolum=%s\nAdres=%s\nMaas=%d\n",okunacak.numara,okunacak.ad_soyad,okunacak.bolum,okunacak.adres,okunacak.maas);
            //bütün bilgileri ekrana yazdir
		}
		else{
			printf("Veri bulunamadi\n"); //oyle birþey olmadigini söyle
		}
        fclose(oku); //kapat dosyayý
	}
}
void kayit_degistir(int personel_numara) //kullanýcýnýn girdiði personel_numarayi kayit_degistir fonksiyonunda kullandým
{
    struct personel guncelle; //güncelleme yapmak için personel bilgilerini tutacak structýr tanýmladým
	FILE *oku; //dosyayý oluþturduk okumak için
	if ((oku=fopen("personeller.dat","rb+"))==NULL) //dosyayý okuttum ve sonradan iþlem yapýlabilmesi için içinde rb dosya açma metodunu kullandým 
    {
        printf("Dosya acilmadi"); //dosya yok ya da boþþa bu hatayý verdirdim
    }
    else
    {
    	fseek(oku,0,SEEK_SET); //dosyamý 0. konumdan baþlayýp 
    	while(fread(&guncelle,sizeof(struct personel),1,oku)) //okuttum 
    	if(personel_numara==guncelle.numara) //dosyamdaki numara ile klavyeden girilen numara eþleþiyormu kontrol ettim
        {
            printf("Numara=%d\nAd soyad=%s\nBolum=%s\nAdres=%s\nMaas=%d\n",guncelle.numara,guncelle.ad_soyad,guncelle.bolum,guncelle.adres,guncelle.maas);
            //numaralar eþleþdiyse ekrana yazdýrdým.
            int konum;
            konum=ftell(oku); //aktif dosyanýn bulunduðu konumu aldým
            fseek(oku,konum-sizeof(personel),SEEK_SET); //konumdan personel structýrýnýn boyutunu çýkardým ve bu üyenin baþýna konumlandým SEEK_SET ile
            int secim;
            printf("Personelin hangi bilgisini guncellemek istersiniz\nNumara=1\nAd soyad=2\nBolum=3\nAdres=4\nMaas=5\n"); //degistirilmek istenen personel bilgisini seçtirdim
            scanf("%d",&secim);
            //gerekli secilen seceneðe göre yeni bilgi kayitlarini aldým 
            if(secim==1)
            {
            	printf("Yeni numarayi giriniz=\n");
            	scanf("%d",&guncelle.numara);
			}
			else if(secim==2)
			{
				printf("Yeni ad ve soyadi giriniz=\n");
				fflush(stdin);
				gets(guncelle.ad_soyad);
			}
			else if(secim==3)
			{
				printf("Yeni bolumu giriniz=\n");
				fflush(stdin);
				gets(guncelle.bolum);
			}
			else if(secim==4)
			{
				printf("Yeni adresi giriniz=\n");
				fflush(stdin);
				gets(guncelle.adres);
			}
			else if(secim==5)
			{
				printf("Yeni maas giriniz=\n");
				fflush(stdin);
				scanf("%d",&guncelle.maas);
			}
			fwrite(&guncelle,sizeof(struct personel),1,oku); //bu aldýðým yeni bilgi kayýtýný okuduðum dosyanýn fseek ile iþaret edilen yerine yazdýrdým
			printf("Degistirme islemi basarali\n");
			break;
		}
		else{
		printf("Hatali personel numarasi tusladiniz\n");
		}
		}
        fclose(oku); //dosyamý kapattým
}
	

