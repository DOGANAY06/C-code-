#include <stdio.h>
#include <string.h>
#define takim 11 //futbol takimi 11 kisi olduðu için giriþte tanimladik
typedef struct futbolcu{
	char name[50];
	char mevki[50];
}futbolcu;
typedef struct fenerbahce{
	futbolcu *futbolcular;
	int sayi;
}fenerbahce;
void futbolcu_ekle(futbolcu *player);
void futbolcu_goster(fenerbahce *player);
int main()
{
	fenerbahce *fenerbahcem;
	fenerbahcem=(fenerbahce*)malloc(sizeof(fenerbahce)*takim); //takimin boyutunu futbolcu sayýsý  ile carpilmasi kadar da bir yer ayýrdýk 
    fenerbahcem->sayi=takim; //fenerbahce takimina takimin mevcudunu iþaretledik
    fenerbahcem->futbolcular=(futbolcu*)malloc(sizeof(futbolcu)*takim);  //takimin  futbolcu sayisi kadar futbolculuk yer ayirdik
	int i;
	for(i=0;i<takim;i++)
	{
		futbolcu_ekle(&(fenerbahcem->futbolcular[i])); //takimdaki futbolcular structýrýný futbolcu_ekleye gönderdik gerekli özelliklerin girilmesi için 
	}
	futbolcu_goster(fenerbahcem);
	return 0;
}
void futbolcum (futbolcu *players) //gelen her bir futbolcu structýrýný ekrana yazdýrdýk
{
	printf("Futbolcu bilgileri=\n");
	printf("Futbolcu adi ve soyadi=%s\n",players->name);
	printf("Futbolcu oynadigi mevki=%s\n",players->mevki);
}
void futbolcu_goster(fenerbahce *player) //takimin iþaretli futbolcularini gosterdik
{
	int i;
	for(i=0;i<player->sayi;i++)
	{
		futbolcum(&(player->futbolcular[i]));  //playerda bulunan futbolcularý futbolcum fonksiyonuna gönderdik
	}
}
void futbolcu_ekle(futbolcu *player)  //iþaretli futbolcularý playere iþaretleyip gerekli futbocularý aldýk 
{
	printf("\nFenerbahce Futbol Takiminin futbolcularini ve özelliklerini giriniz:\n");
	printf("Futbolcu ismini giriniz=\n");
	fflush(stdin);
    gets(player->name);
    printf("Futbolcu hangi bolgede oynuyor\n");
    scanf("%s",&player->mevki);
}

