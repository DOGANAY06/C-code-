#include <stdio.h>

struct Bitalani
{
	unsigned alan1:1,alan2:1; //iþaretsiz tam sayý olarak alanlarýmýzý tanimladik
}bitdeger;
int main()
{
	bitdeger.alan1=1; //alanýmýza 0 ya da 1 koyduk 
	bitdeger.alan2=0;
	printf("Bit degeri alan1=%c\n",bitdeger.alan1 ? '1':'0'); //bit deðerinin alanýndaki deðer 1 veya 0 mý diye sorguladýk
	printf("Bit degeri alan2=%c\n",bitdeger.alan2 ? '1':'0');
	return 0;
}
