#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct isci{  //struct�m�z� tanimladik 
	char namesurname[20]; 
	char mevki[20];
	int maaas;
}isci; 
int main()
{
	isci isci1; //s�n�f a�t�k normal 
	isci *isci2;
	isci2=(isci*)malloc(sizeof(isci)); //haf�zada isci2 ye yer ay�rd�k 
	
	printf("Iscinin ad soyadi giriniz=\n"); 
	gets(isci1.namesurname); //s�n�fa isim soyisim mevki maas ekledik 
	printf("Iscinin mevkisi=\n");
	gets(isci1.mevki);
	printf("Iscinin maasi=\n");
	scanf("%d",&isci1.maaas);
	printf("2.Iscinin ad soyadi giriniz=\n"); 
	fflush(stdin); //tamponu temizlemek i�in kulland�m ��nk� gets ile ald���m namesurname de�erini g�rmeden mevki b�l�m�ne geciyordu.
	gets(&isci2->namesurname); //2.iscimize namesurname  de�erini arada bo�luk olmadan almak i�in kulland�k.Pointer oldu�u i�in ba��na &koyduk
	printf("2.Iscinin mevkisi=\n");
	scanf("%s",&isci2->mevki);
	printf("2.Iscinin maasi=\n");
	scanf("%d",&isci2->maaas);  
	printf("\nTanimli isci adi ve soyadi=%s",isci1.namesurname);  //bu verileri ekrana yazd�rd�k
	printf("\n Tanimli isci mevkisi=%s",isci1.mevki);
	printf("\n Tanimli isci maasi=%d",isci1.maaas);
	printf("\nTanimli isci adi ve soyadi=%s",&isci2->namesurname);  //bu verileri ekrana yazd�rd�k pointer oldugu i�in ekrana yazdirmada -> kullandik 
	printf("\n Tanimli isci mevkisi=%s",isci2->mevki);
	printf("\n Tanimli isci maasi=%d",isci2->maaas);
	return 0;
}
