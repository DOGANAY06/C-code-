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
	for(i=n;i>0;i--,a++) //sayilarin kaçtan baþlayacaðý ve kaça kadar olacaðý a ise pointerýmýzýn deðeri
	{
		islem=1;  //her yeni bir sayida islem ifadesi 1 e döndürülür
		for(j=i;j>0;j--) //j=i den baþlar ve 0 a kadar olan sayýlara azalýr
		{
			islem*=j;  //her j deðeri islem ile carpýlarak döngü tamamlanir
			islemdizisi[a]=islem;
		}
		printf("%d.faktoriyelim=%d\t%p\n",i,*(faktoriyeldizisi+a),faktoriyeldizisi-a); //hangi sayinin faktoriyeli ve sayinin faktoriyel hali ve sayinin buyukten baslayarak kucuge kadar hafýzadaki adresleri
	}
	
	free(faktoriyeldizisi);
}
