#include <stdio.h>
int main()
{
	int sayi=232;
	char harf='D';
	float ondalikli=13.32;
	int *sayiptr;
	char *harfptr;
	float *ondalikliptr;
	sayiptr=&sayi; 
	harfptr=&harf;
	ondalikliptr=&ondalikli;
	printf("Sayimiz =%d,\t adresi=%x\t%p\n",*sayiptr,sayiptr,sayiptr); //tanimli sayiyi ve onaltilik sayi sisteminde adresini,tam adresinide g�sterdik 
	printf("Harfimiz=%c,\t adresi=%x\t%p\n",*harfptr,harfptr,harfptr);  //tanimli harf ,onalt�l�k sayi sisteminde adresi ,tam adresini g�sterdik
	printf("Ondalikli sayimiz=%0.2f,\t adresi=%x\t%p\n",*ondalikliptr,ondalikliptr,ondalikliptr);  // tanimli ondalik sayi,onalt�l�k sayi sisteminde adres, tam adresini g�sterdik
	*sayiptr++; //pointerlar�m�z�n adresini +1 art�rd�k
	*harfptr++;
	*ondalikliptr++;
	printf("int adresi +1 art�rd�k=%x\t%p\n",sayiptr,sayiptr); // onalt�l�k sayi sisteminde artm�� galini g�sterdik ve tam adresini bu sayede integer�n 4 bytl�k bir yer kaplad���n� g�rd�k
	printf("char adresini +1 art�rd�k=%x\t%p\n",harfptr,harfptr); //onalt�l�k sayi sisteminde artm�� galini g�sterdik ve tam adresini bu sayede integer�n 1 bytl�k bir yer kaplad���n� g�rd�k
	printf("Float adresini +1 art�rd�k =%x\t%p\n",ondalikliptr,ondalikliptr); //onalt�l�k sayi sisteminde artm�� galini g�sterdik ve tam adresini bu sayede integer�n 8 bytl�k bir yer kaplad���n� g�rd�k
	return 0;
}
