#include <stdio.h>
#define n 10 
int main(){
	int i,j;
	int buldun=0; //her eleman bulundu�unda buldun de�eri +1 artar
	int tanimlidizi[n]={1,5,21,34,123,64,675,23,34,85}; //taniml� olan dizimiz
	int girilendizi[n];   //kullan�cadan alaca��m�z dizimiz
	for(i=0;i<10;i++){   //dizinin boyutu 10 oldu�u i�in kullan�can 10 a kadar eleman giri�i al�yoruz 
		printf("%d.Dizinin elemanini giriniz=",i+1); //Diziler 0 indisten ba�lad��� i�in ekrana dizinin 1.eleman�n� yazd�rmak i�in i+1 yap�yoruz 
		scanf("%d",&girilendizi[i]);
		for(j=0;j<10;j++) //tanimli dizinin her eleman� d�nd�r�l�r
		{
		if(tanimlidizi[j]==girilendizi[i])  //tanimlidizinin i�inde kullan�c�n�n girdi�i deger var m� kontrol edilir eger varsa 
		{
			printf("Tebrikler dizinin elemanini buldunuz\n buldugunuz indis=%d\n",j); //bulunan dizinin elemani tanimlidizi de ka�inci indiste oldu�u g�sterilir 
			buldun+=1; //bulundu�unda artar
			break;
		}
	}
	}
	printf("%d.tane eleman buldun",buldun); //ka� tane eleman bulundu�u yaz�l�r
	return 0;
}
