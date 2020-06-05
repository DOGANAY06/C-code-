#include <stdio.h>
#include <stdlib.h>
#define n 3
int toplama(int a[],int b[],int boyut);
int cikarma(int a[],int b[],int boyut);
float bolme(int a[],int b[],int boyut);
int carpma(int a[],int b[],int boyut);
int main()
{
    char secenek;
    int a[n];
	int b[n];
    int i;
    for(i=0;i<3;i++){
        printf("a[%d] degerini giriniz=",i+1); //klavyeden dizinin her bir elemanini ald�k
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++){
        printf("b[%d] degerini giriniz=",i+1); //klavyeden di�er dizisinin her bir elemanini ald�k
        scanf("%d",&b[i]);
    }
    do{
         printf("Hangi Ýslemleri yapmak istersiniz=\nToplama=+\nCikarma=-\nBolme=/\nCarpma=*\nCikmak icin=q\n"); //dizi �zerinde hangi i�lemi yapmak istedi�imize karar veriyoruz
         scanf(" %c",&secenek);
         switch(secenek)
         {
         case '+':
         	printf("Toplama islemi secildi");
         	toplama(a,b,n);//toplama fonksiyonumuzu  a,b dizilerimizi ve boyutunu g�nderdik n=boyut
         	break;
         case '-':
         	printf("Cikarma islemi secildi\n");
            cikarma(a,b,n); //cikarma fonksiyonumuzu a,b dizilerimizi ve boyutunu g�nderdik n=boyut
            break;
         case '*':
         	printf("Carpma islemi secildi\n");
         	carpma(a,b,n); //carpma  fonksiyonumuzu a,b dizilerimizi ve boyutunu g�nderdik n=boyut
            break;
         case '/':
            printf("Bolme islemi secildi=\n");
         	bolme(a,b,n); //bolme fonksiyonumuzu a,b dizilerimizi ve boyutunu g�nderdik n=boyut
            break;
        case 'q':
        	printf("Cikma islemi secilmistir\n");
        	break;
         default:
            printf("Hatali islem secildi tekrar deneyiniz\n"); //hatali bir tusa ba��ld���nda q d���nda d�ng� d�nmeye devam edicek
            break;
         }
    }while(secenek!='q'); //kullanici klavyeden q ye ba�ana kadar d�ng� d�ns�n 
    printf("Hesap makinesi kapatýlacak");
}
int toplama(int a[],int b[],int boyut) //dizilerimizi aldik ve dizimiz �zerinde toplama i�lemi yapt�r�yoruz 
{
	int i;
	int c[boyut]; //yeni bir dizi olu�turduk ve toplama sonucunu onun �zerine ekledik
	for(i=0;i<3;i++)
    {
        c[i]=a[i]+b[i];
        printf("c[%d]=%d\n",i,c[i]);
	}
}
int cikarma(int a[],int b[],int boyut)  //dizilerimizi aldik ve dizimiz �zerinde cikarma i�lemi  yapt�r�yoruz 
{
	int i;
	int c[boyut];  //yeni bir dizi olu�turduk ve cikarma sonucunu onun �zerine  ekledik
	for(i=0;i<3;i++)
    {
        c[i]=a[i]-b[i];
        printf("c[%d]=%d\n",i,c[i]);
	}
}
int carpma(int a[],int b[],int boyut) //dizilerimizi aldik ve dizimiz  �zerinde carpma i�lemi yapt�r�yoruz 
{
	int i;
	int c[boyut]; //yeni bir dizi olu�turduk ve carpma sonucunu onun �zerine ekledik
	for(i=0;i<3;i++)
    {
        c[i]=a[i]*b[i];
        printf("c[%d]=%d\n",i,c[i]);
	}
}
float bolme(int a[],int b[],int boyut)
{
	int i;
	float c[boyut];
	for(i=0;i<3;i++)
    {
        c[i]=(float)a[i]/(float)b[i]; //floata �evirdim ��nk� b�lme i�lemleri ondal�kli sonu�lar �retebilir 
        printf("c[%d]=%0.2f\n",i+1,c[i]);
	}
}

