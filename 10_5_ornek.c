#include <stdio.h>

struct Bitalani
{
	unsigned alan1:1,alan2:1; //i�aretsiz tam say� olarak alanlar�m�z� tanimladik
}bitdeger;
int main()
{
	bitdeger.alan1=1; //alan�m�za 0 ya da 1 koyduk 
	bitdeger.alan2=0;
	printf("Bit degeri alan1=%c\n",bitdeger.alan1 ? '1':'0'); //bit de�erinin alan�ndaki de�er 1 veya 0 m� diye sorgulad�k
	printf("Bit degeri alan2=%c\n",bitdeger.alan2 ? '1':'0');
	return 0;
}
