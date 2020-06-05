#include <stdio.h>
#define n 10 
int main(){
	int i,j;
	int buldun=0; //her eleman bulunduðunda buldun deðeri +1 artar
	int tanimlidizi[n]={1,5,21,34,123,64,675,23,34,85}; //tanimlý olan dizimiz
	int girilendizi[n];   //kullanýcadan alacaðýmýz dizimiz
	for(i=0;i<10;i++){   //dizinin boyutu 10 olduðu için kullanýcan 10 a kadar eleman giriþi alýyoruz 
		printf("%d.Dizinin elemanini giriniz=",i+1); //Diziler 0 indisten baþladýðý için ekrana dizinin 1.elemanýný yazdýrmak için i+1 yapýyoruz 
		scanf("%d",&girilendizi[i]);
		for(j=0;j<10;j++) //tanimli dizinin her elemaný döndürülür
		{
		if(tanimlidizi[j]==girilendizi[i])  //tanimlidizinin içinde kullanýcýnýn girdiði deger var mý kontrol edilir eger varsa 
		{
			printf("Tebrikler dizinin elemanini buldunuz\n buldugunuz indis=%d\n",j); //bulunan dizinin elemani tanimlidizi de kaçinci indiste olduðu gösterilir 
			buldun+=1; //bulunduðunda artar
			break;
		}
	}
	}
	printf("%d.tane eleman buldun",buldun); //kaç tane eleman bulunduðu yazýlýr
	return 0;
}
