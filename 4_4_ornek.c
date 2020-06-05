#include <stdio.h>
int main()
{
	char adsoyad[4][10];
	int i;
	for(i=0;i<4;i++)
	{
			printf("Isminizi ve soyisminizi giriniz=");
			//scanf("%s",&adsoyad[i]);
			gets(adsoyad[i]); //bosluktan sonrasýnýda almasýný istediðimiz için gets ile alýyoruz
	}

	for(i=0;i<4;i++)
	{
		printf("\n%d.Iscinin ismi ve soyismi=",i+1);
		puts(adsoyad[i]); //puts ile aldýðýmýz degerleri ekrana yazdýrýyoruz
	}
	return 0;
}
