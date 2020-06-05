#include <stdio.h>
#include <stdlib.h> //realloc ve malloc fonksiyonu var 
int main() 
{
	int n;
	printf("Kac tane asal sayi yazdirmak istersiniz=");
	scanf("%d",&n);
	int mydizi[n]; //10 tane asal sayinin bulunacaðý diziyi tanýmladýk
	int *ptrdizi;  //pointer dizimizi tanýmladýk
	int i,j,a=0;   
	ptrdizi=(int*)malloc(sizeof(int)*5);
	int sayac=0;  //sayac 0 dan baþladý asal sayý kontrolü için oluþturduk
	ptrdizi=(int*)realloc(ptrdizi,2); //realloc fonksiyonu ile asal sayimizi nbayt*2 ile yükselttik.
	ptrdizi=mydizi; //baþlangýç deðerini atadýk dizimizin
	for(i=2;i<100,a<n+2;i++)  //asal sayilar 2 den baþladýðý için sayimizi 2 den baþlattýk 10 tane dizi elemanýmýz olunca döngü bitecek
	{
	    sayac=0; //her döngüde sayac 0'lanacak asal sayi için
		for(j=2;j<i;j++) // j=2 yi 2 den baþlattýk çünkü asal sayilarin kurali 1 e ve kendisine bölünemeyen sayilar i den küçük yaptýk ve kendisine bölünemeyeceði anlamýný verdik
		{
			if(i%j==0)  //i%j== bölüp kalaný 0 a esitse 
			{
				sayac++; //sayacý ++artýrdýk 
				break; //döngüyü kýrdýk
			}
		}
		if(sayac==0)  //sayac 0 a esitse
		{
			mydizi[a]=i;  //i.sayiyi dizimize atadýk
			a++;  //dizimizin eleman sayisini artýrdýk
		}
	}
	for(i=0;i<n+2;i++)
	{
	    //printf("%d.dizi\n",mydizi[i]);
		printf("\n%d.Asal sayi=%d,ve adresi=%p\n",i+1,*(ptrdizi+i),(ptrdizi+i)); //kacinci asal sayi olduðunu yazdýk ve adresteki asal sayiyi iþaret ettik ve adresini gösterdik sýrasýyla
	}
	free(ptrdizi);
}

