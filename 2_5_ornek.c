#include <stdio.h>
int main()
{
char harf;
int toplama,cikarma,carpma,sayi1,sayi2;
float bolme;
printf("Islem yapmak istediginiz sayilari giriniz=");
	scanf("%d %d",&sayi1,&sayi2);
do{
	printf("\nHangi islemi yapmak istersiniz\nToplama='+'\nCikarma='-'\n,Bolme='/'\n,Carpma='*'\nCikmak icin='h' basiniz");
	scanf(" %c",&harf);
	if(harf=='+'){
		toplama=sayi1+sayi2;
		printf("\nSayilarin toplami=%d",toplama);
	}
	else if(harf=='-'){
		cikarma=sayi1-sayi2;
		printf("\nSayilarin toplami=%d",cikarma);
	}
	else if(harf=='/'){
		if(sayi1>0 && sayi2) //sayilarmiz 0 dan b�y�kse bolme islemi yapilir
		{
		bolme=(float)sayi1/(float)sayi2; //aldigimiz sayilari float ifadeye yani ondal��a cevirdik ��nk� b�lme i�lemi sonucumuz ondalikli c�kabilir
		printf("\nSayilarin bolumu=%f",bolme);
	}
	else{
		printf("\nSayilarin bolumu=0"); //eger sayilardan herhangi biri 0 sa 0 sonucu d�nd�r�l�r
	}
	}
	else if(harf=='*'){
		carpma=sayi1*sayi2;
		printf("\nSayilarin toplami=%d",carpma);
	}
}while(harf!='h');  //burada h ye bas�lmad��� s�rece d�ng� devam etmesi sa�lan�r not kap�s� ile
printf("Cikis yapildi");
return 0;
}
