#include <stdio.h>
int main()
{
	char adsoyad[4][10];
	int i;
	for(i=0;i<4;i++)
	{
			printf("Isminizi ve soyisminizi giriniz=");
			//scanf("%s",&adsoyad[i]);
			gets(adsoyad[i]); //bosluktan sonras�n�da almas�n� istedi�imiz i�in gets ile al�yoruz
	}

	for(i=0;i<4;i++)
	{
		printf("\n%d.Iscinin ismi ve soyismi=",i+1);
		puts(adsoyad[i]); //puts ile ald���m�z degerleri ekrana yazd�r�yoruz
	}
	return 0;
}
