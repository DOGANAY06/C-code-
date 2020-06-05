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
	sirketim=(sirket*)malloc(sizeof(sirket)*n); //sirkete sirketteki isci say�s� kadar yer a�
	sirketim->sayi=n;
	sirketim->isciler=(isci*)malloc(sizeof(isci)*n); //�irketimde bulunan i�ciler i�aretcisine isci sayisi ve isci �zelliklerinin bulundu�u struct�r kadar yer a�
	for(i=0;i<n;i++)
	{
		isci_ekle(&(sirketim->isciler[i]));
	}
	iscileri_goster(sirketim);
	return 0;
}
void isci_goster(isci *iscim)  //her iscimizin �zelliklerini g�sterdik 
{
	printf("\nIsci bilgileri=\n");
	printf("Isci adi ve soyadi=%s\n",iscim->namesurname); 
	printf("Iscinin isi=%s\n",iscim->isi);
	printf("Iscinin eski maasi=%d\n",iscim->maasi);
	printf("Iscinin guncel maasi=%d\n",(iscim->maasi)+(iscim->zam));  //i�cinin eski maasi ve eklenen zam� koyarak g�ncel maasi uygulad�k 
}
void iscileri_goster(sirket *workers)  //�irkette bulunan i�cileri ekrana yazd�rd�k
{
	int i;
	for(i=0;i<workers->sayi;i++) //isci sayisi kadar d�ng�y� d�nd�rd�k ve 
	{
		isci_goster(&(workers->isciler[i]));  //sirkette bulunan iscilerimizin bilgilerini isci g�ster fonksiyonunda g�sterdik  
	}
}
void isci_ekle(isci *workers) //isci struct�r�m�z� i�aretleyip her i��i i�in �zelliklerini girdik
{
	printf("\nIsci ad ve soyadi giriniz=");
	fflush(stdin); //isci ad ve soyadi giriniz den sonra yapt��i i� b�l�m�ne ge�mesin diye fflush(stdin) kulland�k
	gets(workers->namesurname);
	printf("\nYaptigi is\n");
	scanf("%s",&workers->isi);
	printf("\nIscinin maasi=");
	scanf("%d",&workers->maasi);
	printf("\n Isciye yapilacak zam=");
	scanf("%d",&workers->zam);
}



