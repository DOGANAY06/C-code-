#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct isci{
	char namesurname[50];
	char isi[50];
	int maasi;
	int zam;
}isci;

typedef struct sirket{
	isci *isciler;
	int sayi;
	int zam;
}sirket;
void iscileri_goster(sirket *workers);
void isci_ekle(isci *workers);
int main()
{
	int i;
	int n,zam;
	printf("Ne kadar calisaniniz var=");
	scanf("%d",&n);
	sirket *sirketim;
	sirketim=(sirket*)malloc(sizeof(sirket)*n); //sirkete sirketteki isci sayýsý kadar yer aç
	sirketim->sayi=n;
	sirketim->isciler=(isci*)malloc(sizeof(isci)*n); //þirketimde bulunan iþciler iþaretcisine isci sayisi ve isci özelliklerinin bulunduðu structýr kadar yer aç
	for(i=0;i<n;i++)
	{
		isci_ekle(&(sirketim->isciler[i]));
	}
	iscileri_goster(sirketim);
	return 0;
}
void isci_goster(isci *iscim)  //her iscimizin özelliklerini gösterdik 
{
	printf("\nIsci bilgileri=\n");
	printf("Isci adi ve soyadi=%s\n",iscim->namesurname); 
	printf("Iscinin isi=%s\n",iscim->isi);
	printf("Iscinin eski maasi=%d\n",iscim->maasi);
	printf("Iscinin guncel maasi=%d\n",(iscim->maasi)+(iscim->zam));  //iþcinin eski maasi ve eklenen zamý koyarak güncel maasi uyguladýk 
}
void iscileri_goster(sirket *workers)  //þirkette bulunan iþcileri ekrana yazdýrdýk
{
	int i;
	for(i=0;i<workers->sayi;i++) //isci sayisi kadar döngüyü döndürdük ve 
	{
		isci_goster(&(workers->isciler[i]));  //sirkette bulunan iscilerimizin bilgilerini isci göster fonksiyonunda gösterdik  
	}
}
void isci_ekle(isci *workers) //isci structýrýmýzý iþaretleyip her iþçi için özelliklerini girdik
{
	printf("\nIsci ad ve soyadi giriniz=");
	fflush(stdin); //isci ad ve soyadi giriniz den sonra yaptýði iþ bölümüne geçmesin diye fflush(stdin) kullandýk
	gets(workers->namesurname);
	printf("\nYaptigi is\n");
	scanf("%s",&workers->isi);
	printf("\nIscinin maasi=");
	scanf("%d",&workers->maasi);
	printf("\n Isciye yapilacak zam=");
	scanf("%d",&workers->zam);
}



