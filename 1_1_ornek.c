#include <stdio.h>
int main()
{
	int sayi1=12; //burada veri tiplerimize deðiþkenler atayarak onlara sayi verdik
	double sayi2=10.43;
	float sayi3=13.23;
	char harf='b'; //char veri tipine karakter verdik 
	unsigned int sayi5=32;
	printf("intin sayinin ekranda yazimi=%d ve hafizada kapladigi yer=%d\n",sayi1,sizeof(int)); //sayilarin ekranda yazimýný yaptýk ve onlarýn hafýzada kapladýðý yerleri bulduk sizeof parametresi ile
	printf("doublein sayinin ekranda yazimi=%f ve hafizada kapladigi yer=%d\n",sayi2,sizeof(double));
	printf("float sayinin ekranda yazimi=%f ve hafizada kapladigi yer=%d\n",sayi3,sizeof(float));
	printf("unsigned sayinin ekranda yazimi=%d ve hafizada kapladigi yer=%d\n",sayi5,sizeof(unsigned));
	printf("Char degerin ekranda yazimi=%c ve hafizada kapladigi yer=%d\n",harf,sizeof(char));
	return 0;
}
