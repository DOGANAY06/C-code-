#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	printf("Kaca kadar sayinin faktoriyelini bulmak istersiniz\n");
	scanf("%d",&n);
	int islem=1;
	int islemdizisi[n];
	int i,j,a=0;
	int *faktoriyeldizisi;
	faktoriyeldizisi=(int *) malloc( sizeof(int)*n ); 
	faktoriyeldizisi=islemdizisi;
	for(i=n;i>0;i--,a++) //sayilarin ka�tan ba�layaca�� ve ka�a kadar olaca�� a ise pointer�m�z�n de�eri
	{
		islem=1;  //her yeni bir sayida islem ifadesi 1 e d�nd�r�l�r
		for(j=i;j>0;j--) //j=i den ba�lar ve 0 a kadar olan say�lara azal�r
		{
			islem*=j;  //her j de�eri islem ile carp�larak d�ng� tamamlanir
			islemdizisi[a]=islem;
		}
		printf("%d.faktoriyelim=%d\t%p\n",i,*(faktoriyeldizisi+a),faktoriyeldizisi-a); //hangi sayinin faktoriyeli ve sayinin faktoriyel hali ve sayinin buyukten baslayarak kucuge kadar haf�zadaki adresleri
	}
	
	free(faktoriyeldizisi);
}
