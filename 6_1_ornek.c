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
	printf("Sayimiz =%d,\t adresi=%x\t%p\n",*sayiptr,sayiptr,sayiptr); //tanimli sayiyi ve onaltilik sayi sisteminde adresini,tam adresinide gösterdik 
	printf("Harfimiz=%c,\t adresi=%x\t%p\n",*harfptr,harfptr,harfptr);  //tanimli harf ,onaltılık sayi sisteminde adresi ,tam adresini gösterdik
	printf("Ondalikli sayimiz=%0.2f,\t adresi=%x\t%p\n",*ondalikliptr,ondalikliptr,ondalikliptr);  // tanimli ondalik sayi,onaltılık sayi sisteminde adres, tam adresini gösterdik
	*sayiptr++; //pointerlarımızın adresini +1 artırdık
	*harfptr++;
	*ondalikliptr++;
	printf("int adresi +1 artırdık=%x\t%p\n",sayiptr,sayiptr); // onaltılık sayi sisteminde artmış galini gösterdik ve tam adresini bu sayede integerın 4 bytlık bir yer kapladığını gördük
	printf("char adresini +1 artırdık=%x\t%p\n",harfptr,harfptr); //onaltılık sayi sisteminde artmış galini gösterdik ve tam adresini bu sayede integerın 1 bytlık bir yer kapladığını gördük
	printf("Float adresini +1 artırdık =%x\t%p\n",ondalikliptr,ondalikliptr); //onaltılık sayi sisteminde artmış galini gösterdik ve tam adresini bu sayede integerın 8 bytlık bir yer kapladığını gördük
	return 0;
}
