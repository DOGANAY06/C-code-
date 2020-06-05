#include <stdio.h>
int main() 
{
	int mydizi[10]; //10 tane asal sayinin bulunacaðý diziyi tanýmladýk
	int *ptrdizi;  //pointer dizimizi tanýmladýk
	int i,j,a=0;   
	int sayac=0;  //sayac 0 dan baþladý asal sayý kontrolü için oluþturduk
	ptrdizi=mydizi; //baþlangýç deðerini atadýk dizimizin
	for(i=2;i<100,a<10;i++)  //asal sayilar 2 den baþladýðý için sayimizi 2 den baþlattýk 10 tane dizi elemanýmýz olunca döngü bitecek
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
	for(i=0;i<10;i++)
	{
	    //printf("%d.dizi\n",mydizi[i]);
		printf("\n%d.Asal sayi=%d,ve adresi=%p",i+1,*(ptrdizi+i),(ptrdizi+i)); //kacinci asal sayi olduðunu yazdýk ve adresteki asal sayiyi iþaret ettik ve adresini gösterdik sýrasýyla
	}
}

