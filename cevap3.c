#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
void sifrelenmis (char *sifredizisi,int key,int n); //dinamik dizimizi ve anahtar�m�z� ve karakter uzunlu�umuzu fonksiyonumuza ald�k
int main(){
	int a;
	int n;
	int i;
	char *sifredizisi; //sifremizin tutulaca�� dinamik dizi
	srand(time(NULL)); //zamana g�re sifre olu�turma blogu de�i�sin diye yapt�m
	printf("Kac karakter uzunlugunda sifre belirlenip sifrelensin=");
	scanf("%d",&n); 
	char harfler_sayilar[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','1','2','3','4','5','6','7','8','9','0'};
	//harfler ve sayilar dizisini random b�y�k harf k�c�k harf ve sayilar i�in olu�turdum
	sifredizisi=(char*)malloc(sizeof(char)*n); //dinamik dizi kaplayaca�� alan n kadar karakter uzunlu�unda bir alan kaplar
    char sifrelemek[n]; //sifrelemek istedi�im dizim n tane elemandan olu�acak yani sifrenin karakter uzunlu�u
	if(sifredizisi==NULL)
    {
    	printf("Hafizada alan yok");
	}
	else{
	for(i=0;i<n;i++)
	{
		a=rand()%60+1; //1 den ba�layarak 60 aras�nda random bir say�y� att�m 
		sifrelemek[i]=harfler_sayilar[a]; //bu random say�m harfler_sayilar dizimin i�indeki elemanlardan herhangi birini buldu ve onu msg sifrelemek istedi�im dizimin eleman� yapt�m
	}
	}
	sifredizisi=sifrelemek; //sifrelemek dizimi dinamik bellek y�netimi ile tan�mlad�m 
    int key =3; //satir degeridir bunu istersek de�i�tirebiliriz
 
    printf("Kullanilacak sifre: %s",sifredizisi);
 
    sifrelenmis(sifredizisi,key,n);
    free(sifredizisi); //haf�zada tutulan yeri serbest b�rak�yorum
    return 0;
}
void sifrelenmis (char *sifredizisi,int key,int n)
{
	int uzunluk =n; //sifremizin boyunu  uzunluk parametresinde tuttuk
	int  i, j, k = -1, satir = 0, sutun = 0;  
    char matrix[key][uzunluk];  //2 boyutlu bir dizi tan�mlad�k key sat�r� sifrenin uzunlu�u ise sutunu belirtir
 
    for(i = 0; i < key; ++i)  //satir ve sutunumuzu olu�turduk  3 satir mesaj�m�z ka� boyutlu ise o kadarda sutun var
        for(j = 0; j < uzunluk; ++j)
            matrix[i][j] = '\n';
 
    for(i = 0; i < uzunluk; ++i){   //mesaj uzunluguna g�re
        matrix[satir][sutun++] =*(sifredizisi+i);  //her seferinde sutunu art�rd�k c�nk� 0. indisin 1.koyduk ilk,sonra 1.indisin 2.koyduk  ve dinamik dizimizin i�erisinde bulunan karakterleri atad�k di�er dizimize
 
        if(satir == 0 || satir == key-1)  
            k= k * (-1); 
 
        satir = satir + k;
    }
 
    printf("\nSifrelenmis sifre: ");
    for(i = 0; i < key; ++i)
        for(j = 0; j < uzunluk; ++j) 
            if(matrix[i][j] != '\n') 
                printf("%c", matrix[i][j]); //dizinin her elaman�n� ekrana yazd�rd�k
}
