#include <stdio.h>
#include <conio.h>
int main()
{
	char namesurname[50],ch[50];
	fopen("isimsoyisims.txt","r");
	printf("Isým ve soyisim bilgisi giriniz\n");
	gets(namesurname);
	FILE *dosya1,*dosya2;
	if (dosya1 == NULL) // dosya bossa buraya gidicek 
	{
		puts("Dosya açýlmýyor");
		getch();
		exit(0);
	}
	else
	{
		fgets(ch,50,dosya1);
		printf("Giris kaydi=%s\n",ch);
	}
	fopen("isimsoyisim.txt","a+");
		if (dosya2 == NULL) // dosya bossa buraya gidicek 
	{
		puts("Dosya açýlmýyor");
		getch();
		exit(0);
	}
	else
	{
		fputs(namesurname,dosya2);
		printf("Kayitli isim soyisim=%s",namesurname);
		
	}
	return 0;
}
