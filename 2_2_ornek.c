#include <stdio.h>
int main()
{
	int i,j;
	for(i=0;i<7;i++) //ilk for d�ng�m�z sutun k�sm�n� ifade  eder
	{
		for(j=0;j<7;j++)  //ikinci for d�ng�m�z satiri ifade eder 
		{
			if(i==0 || i==3 || i==6)  //eger satirimiz 0 indiste 3 indiste 6 indiste ise �art sa�lanm�� olur bu �art�m�z e harfinin ba�lang���n� ortas�n� ve son noktas�n� belli eder 
			{
				printf("*");   //satir kismimiz  j=0 dan ba�layarak 7 ye kadar y�ld�zlarla dolar
			}
		}
		printf("*\n"); //eger if �art� sa�lanmaz i�e d�ng�ye girilmez her s�t�na  1 adet y�ld�z koyarak bir alt sat�ra ge�me i�lemi yap�l�r "\n" ile.
	}
	return 0;
}
