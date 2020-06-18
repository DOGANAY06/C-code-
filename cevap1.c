#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct personel //personel struct�r�m
{
	int  numara;
	char ad_soyad[25];
	char bolum[15];
	char adres[25];
	int maas;
}personel;

void kayit_ekle(personel *person);  //kayitlarimizin struct�ra eklendi�i fonksiyon
void kayit_ekle_dosyaya(personel ekle); //kayitlar�m�z�n struct�rdan dosyaya eklendi�i fonksiyon
void kayit_ara(int personel_numara);  //kayitlarin dosyadan okunup e�lesen kayitla ekrana yazd�r�ld��� fonksiyon
void kayit_degistir(int personel_numara);  //kayitlarin �nce okunup sonra e�lesen kayitla de�i�tirilme i�leminin yap�ld��� fonksiyon
int main()
{
	printf("Calisanlar veri tabanina hosgeldiniz\n");
	struct personel *personeller;
	int personel_numara;
	int secim;
		do  //d�ng� tan�mlad�m  ��nk� secim i�lemi istenen de�ere kadar devam etmesini istiyorum
	{
		printf("Hangi islemi yapmak istersiniz\nYeni kayit ekle=1\nKayit Ara=2\nKayit degistir=3\nCikis=4 icin basiniz\n");
		scanf("%d",&secim);
		switch(secim)
		{
			case 1: //kayit ekleme secene�idir
			personeller=(personel*)malloc(sizeof(personel)); //her personel i�in haf�zada yer a��cak
			if(personeller==NULL)
			{
				printf("Hafizada yer acilamadi");
			}
			else{
			kayit_ekle(&personeller[0]);  //personellerimizin struct�ra eklendi�i b�l�m
			kayit_ekle_dosyaya(personeller[0]); //personellerimiz dosyaya eklendi�i fonksiyon
			break;
			}
			case 2:
			printf("Aramak istediginiz personel numarasini giriniz=\n"); //personel aratmak i�in gerekli numara
			scanf("%u",&personel_numara);  //unsigned yapt�m ��nk� - li bir de�er giremez
			kayit_ara(personel_numara); //fonksiyonuma personel_numara parametresini g�nderdim ��nk� kar��la�t�rma yap�cam
			break;
			case 3:
				printf("Degistirmek istediginiz kisinin personel numarasini giriniz=\n"); 
				scanf("%u",&personel_numara); 
				kayit_degistir(personel_numara); //kullanicidan al�nan personel numara bilgisini kayit de�i�tir fonksiyonuna g�nderdim kar��la�t�rma yapmak i�in
				break;
			case 4:
				printf("Cikis islemi secildi=\n");
				break;
			default:
				printf("Hatali secim tekrar deneyiniz\n");
				break;
		}
	}while(secim!=4); //4 e bas�lmad��� taktirde d�ng� devam etsin
	printf("Calisanlar veri tabani kapatildi\n");
	free(personeller); //haf�zadaki yer bo�alt�yoruz
	return 0;
}


void kayit_ekle(personel *person) //struct�r�maza personel de�erlerimiz yaz�laak  pointer olarak yaz�lacak haf�zada tutulmasi i�in ve dinamik dizidir
{
	printf("Bilgi ekleme bolumu\n");
    printf("Personel numarayi giriniz\n");
    scanf("%d",&person->numara);
    printf("Personel ad ve soyadi giriniz\n");
    fflush(stdin); //bir sonraki de�er alma i�lemine ge�mesin diye tamponu temizledim
    gets(person->ad_soyad);
    printf("Personel calistigi bolumu giriniz\n");
    gets(person->bolum);
    printf("Personel adresi giriniz\n");
    gets(person->adres);
    printf("Personel maasi giriniz\n");
    scanf("%d",&person->maas);
}
void kayit_ekle_dosyaya(personel ekle)  //personel struct�r�m�za yaz�lan veriler eklenecek dosyaya 
{
	FILE *ekleme; 
    if ((ekleme=fopen("personeller.dat","ab"))==NULL) //dosya olu�turup kontrol ettirdim  ab dosya a�ma metodu ile a�t�m ��nk� a��p ekleme yapmas�n�da istiyor�m
    {
        printf("Dosya acilmadi haf�zada yer yok");
    }
    else
    {
    	fwrite(&ekle,sizeof(struct personel),1,ekleme); //dosyaya struct�r�m�n ekledim ba�tan ba�layarak
    	printf("Ekleme islemi basari ile gerceklestirildi\n");
        fclose(ekleme);
    }
}
void kayit_ara(int personel_numara)
{
	struct personel okunacak; //okunacak struct�m�z� olu�turduk
	FILE *oku; 
	if ((oku=fopen("personeller.dat","rb"))==NULL) //olu�tudu�um dosyay� rb dosya a�ma metodu ile varsa okuttum yoksa buraya girdi 
    {
        printf("Dosya acilmadi haf�zada yer yok"); 
    }
    else
    {
    	fseek(oku,0,SEEK_SET); //dosyan�n 0 konumundan ve ba��ndan ba�la konum her zaman arama i�lemi i�in 0 dan ba�l�ca�� i�in 2 kayit 1 kere veri bulunamadi d�nd�r�r.
    	while(fread(&okunacak,sizeof(struct personel),1,oku)) //oku dosyan�n boyutuna kadar 
    	if(personel_numara==okunacak.numara) //eger okunan de�erlerdeki numara bilgisi  kullan�c�n�n girdi�i  numara ile ayn� ise 
        {
            printf("Numara=%d\nAd soyad=%s\nBolum=%s\nAdres=%s\nMaas=%d\n",okunacak.numara,okunacak.ad_soyad,okunacak.bolum,okunacak.adres,okunacak.maas);
            //b�t�n bilgileri ekrana yazdir
		}
		else{
			printf("Veri bulunamadi\n"); //oyle bir�ey olmadigini s�yle
		}
        fclose(oku); //kapat dosyay�
	}
}
void kayit_degistir(int personel_numara) //kullan�c�n�n girdi�i personel_numarayi kayit_degistir fonksiyonunda kulland�m
{
    struct personel guncelle; //g�ncelleme yapmak i�in personel bilgilerini tutacak struct�r tan�mlad�m
	FILE *oku; //dosyay� olu�turduk okumak i�in
	if ((oku=fopen("personeller.dat","rb+"))==NULL) //dosyay� okuttum ve sonradan i�lem yap�labilmesi i�in i�inde rb dosya a�ma metodunu kulland�m 
    {
        printf("Dosya acilmadi"); //dosya yok ya da bo��a bu hatay� verdirdim
    }
    else
    {
    	fseek(oku,0,SEEK_SET); //dosyam� 0. konumdan ba�lay�p 
    	while(fread(&guncelle,sizeof(struct personel),1,oku)) //okuttum 
    	if(personel_numara==guncelle.numara) //dosyamdaki numara ile klavyeden girilen numara e�le�iyormu kontrol ettim
        {
            printf("Numara=%d\nAd soyad=%s\nBolum=%s\nAdres=%s\nMaas=%d\n",guncelle.numara,guncelle.ad_soyad,guncelle.bolum,guncelle.adres,guncelle.maas);
            //numaralar e�le�diyse ekrana yazd�rd�m.
            int konum;
            konum=ftell(oku); //aktif dosyan�n bulundu�u konumu ald�m
            fseek(oku,konum-sizeof(personel),SEEK_SET); //konumdan personel struct�r�n�n boyutunu ��kard�m ve bu �yenin ba��na konumland�m SEEK_SET ile
            int secim;
            printf("Personelin hangi bilgisini guncellemek istersiniz\nNumara=1\nAd soyad=2\nBolum=3\nAdres=4\nMaas=5\n"); //degistirilmek istenen personel bilgisini se�tirdim
            scanf("%d",&secim);
            //gerekli secilen secene�e g�re yeni bilgi kayitlarini ald�m 
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
			fwrite(&guncelle,sizeof(struct personel),1,oku); //bu ald���m yeni bilgi kay�t�n� okudu�um dosyan�n fseek ile i�aret edilen yerine yazd�rd�m
			printf("Degistirme islemi basarali\n");
			break;
		}
		else{
		printf("Hatali personel numarasi tusladiniz\n");
		}
		}
        fclose(oku); //dosyam� kapatt�m
}
	

