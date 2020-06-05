#include <stdio.h>
int main()
{
	int i,j;
	char arabalar[3][10]={"Tofas","Citroen","Pejo"}; //her araba modeli 1 satirda tutulur 10 sütünda yer alır
	int satis[3]={123,423,234};   //arabalarin satis miktarı 3 satirda tutulur çünkü 3 adet araba vardır
	for(i=0;i<3;i++)
	{
			printf("%s satis miktari=%d\n",arabalar[i],satis[i]); 
}
return 0;
}
