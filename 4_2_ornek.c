#include <stdio.h>
int main()
{
	int i,j;
	char arabalar[3][10]={"Tofas","Citroen","Pejo"}; //her araba modeli 1 satirda tutulur 10 s�t�nda yer al�r
	int satis[3]={123,423,234};   //arabalarin satis miktar� 3 satirda tutulur ��nk� 3 adet araba vard�r
	for(i=0;i<3;i++)
	{
			printf("%s satis miktari=%d\n",arabalar[i],satis[i]); 
}
return 0;
}
