#include <stdio.h>
int main(){
	char kelime[10];
	printf("Sifrelemek istediginiz metni giriniz=");
	scanf("%s",&kelime);
	char newkelime[10];
	int anahtar=33;
	char new;
	int i=0,islem;
	printf("Islem seciniz=Sifre c�z�mleme[1],Sifreleme[2]");
	scanf("%d",&islem);
	if (islem==1){
		for(i=0;i<10;i++){
			new=kelime[i]; //karakter olarak girilen sifremizin (dizinin) her bir eleman�n� tutuyoruz  
			newkelime[i]=(char)(((int)new)-anahtar); //tuttugumuz her eleman icin anahtar islemini yap�yoruz girdigimiz char dizini inte ceviriyoruz o degere anahtar azaltma ya da art�rma islemini yap�yoruz sonra o yeni int degerini char a ceviriyoruz bunuda yeni diziye aktar�yoruz.
		}
	}
	else if (islem==2){
		for(i=0;i<10;i++){
			new=kelime[i];
			newkelime[i]=(char)(((int)new)+anahtar);
		}
	}
	else{
	printf("Yanlis islem secildi");
	}
		printf("Son hali=%s",newkelime);
	return 0;
}
