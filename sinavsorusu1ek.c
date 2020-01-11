#include <stdio.h>
int main(){
	char kelime[10];
	char newkelime[10];
	int islem,i=0;
	printf("Islemi seciniz=Sifreleme [1]ya da sifre cozme [2] ");
	scanf("%d",&islem);
	if (islem==1){
		printf("sifreyi giriniz=");
		scanf("%s",&kelime);
		for(i=0;i<10;i++){
			newkelime[i]=kelime[i]+33; //kelimemizin her harfine(characterine)+33 ekledik bunuda newkelime degiskenine atadýk 
		}
		printf("\nYeni sifre=%s",newkelime);
	}
	else if(islem==2){
		printf("Sifreyi giriniz=");
		scanf("%s",&kelime);
		for(i=0;i<10;i++){
			newkelime[i]=kelime[i]-33; //kelimemizin her harfine(characterine)-33 çýkardýk bunuda newkelime degiskenine atadýk 
		}
		printf("\nYeni sifre=%s",newkelime);
	}
	else{
		printf("Yanlis secim yapildi");
	}
	return 0;
}
