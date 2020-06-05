#include <stdio.h>
#include <string.h>
#define takim 11 //futbol takimi 11 kisi oldu�u i�in giri�te tanimladik
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
	fenerbahcem=(fenerbahce*)malloc(sizeof(fenerbahce)*takim); //takimin boyutunu futbolcu say�s�  ile carpilmasi kadar da bir yer ay�rd�k 
    fenerbahcem->sayi=takim; //fenerbahce takimina takimin mevcudunu i�aretledik
    fenerbahcem->futbolcular=(futbolcu*)malloc(sizeof(futbolcu)*takim);  //takimin  futbolcu sayisi kadar futbolculuk yer ayirdik
	int i;
	for(i=0;i<takim;i++)
	{
		futbolcu_ekle(&(fenerbahcem->futbolcular[i])); //takimdaki futbolcular struct�r�n� futbolcu_ekleye g�nderdik gerekli �zelliklerin girilmesi i�in 
	}
	futbolcu_goster(fenerbahcem);
	return 0;
}
void futbolcum (futbolcu *players) //gelen her bir futbolcu struct�r�n� ekrana yazd�rd�k
{
	printf("Futbolcu bilgileri=\n");
	printf("Futbolcu adi ve soyadi=%s\n",players->name);
	printf("Futbolcu oynadigi mevki=%s\n",players->mevki);
}
void futbolcu_goster(fenerbahce *player) //takimin i�aretli futbolcularini gosterdik
{
	int i;
	for(i=0;i<player->sayi;i++)
	{
		futbolcum(&(player->futbolcular[i]));  //playerda bulunan futbolcular� futbolcum fonksiyonuna g�nderdik
	}
}
void futbolcu_ekle(futbolcu *player)  //i�aretli futbolcular� playere i�aretleyip gerekli futbocular� ald�k 
{
	printf("\nFenerbahce Futbol Takiminin futbolcularini ve �zelliklerini giriniz:\n");
	printf("Futbolcu ismini giriniz=\n");
	fflush(stdin);
    gets(player->name);
    printf("Futbolcu hangi bolgede oynuyor\n");
    scanf("%s",&player->mevki);
}

