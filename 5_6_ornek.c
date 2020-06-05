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
        printf("a[%d] degerini giriniz=",i+1); //klavyeden dizinin her bir elemanini aldık
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++){
        printf("b[%d] degerini giriniz=",i+1); //klavyeden diğer dizisinin her bir elemanini aldık
        scanf("%d",&b[i]);
    }
    do{
         printf("Hangi Ãslemleri yapmak istersiniz=\nToplama=+\nCikarma=-\nBolme=/\nCarpma=*\nCikmak icin=q\n"); //dizi üzerinde hangi işlemi yapmak istediğimize karar veriyoruz
         scanf(" %c",&secenek);
         switch(secenek)
         {
         case '+':
         	printf("Toplama islemi secildi");
         	toplama(a,b,n);//toplama fonksiyonumuzu  a,b dizilerimizi ve boyutunu gönderdik n=boyut
         	break;
         case '-':
         	printf("Cikarma islemi secildi\n");
            cikarma(a,b,n); //cikarma fonksiyonumuzu a,b dizilerimizi ve boyutunu gönderdik n=boyut
            break;
         case '*':
         	printf("Carpma islemi secildi\n");
         	carpma(a,b,n); //carpma  fonksiyonumuzu a,b dizilerimizi ve boyutunu gönderdik n=boyut
            break;
         case '/':
            printf("Bolme islemi secildi=\n");
         	bolme(a,b,n); //bolme fonksiyonumuzu a,b dizilerimizi ve boyutunu gönderdik n=boyut
            break;
        case 'q':
        	printf("Cikma islemi secilmistir\n");
        	break;
         default:
            printf("Hatali islem secildi tekrar deneyiniz\n"); //hatali bir tusa başıldığında q dışında döngü dönmeye devam edicek
            break;
         }
    }while(secenek!='q'); //kullanici klavyeden q ye başana kadar döngü dönsün 
    printf("Hesap makinesi kapatÃ½lacak");
}
int toplama(int a[],int b[],int boyut) //dizilerimizi aldik ve dizimiz üzerinde toplama işlemi yaptırıyoruz 
{
	int i;
	int c[boyut]; //yeni bir dizi oluşturduk ve toplama sonucunu onun üzerine ekledik
	for(i=0;i<3;i++)
    {
        c[i]=a[i]+b[i];
        printf("c[%d]=%d\n",i,c[i]);
	}
}
int cikarma(int a[],int b[],int boyut)  //dizilerimizi aldik ve dizimiz üzerinde cikarma işlemi  yaptırıyoruz 
{
	int i;
	int c[boyut];  //yeni bir dizi oluşturduk ve cikarma sonucunu onun üzerine  ekledik
	for(i=0;i<3;i++)
    {
        c[i]=a[i]-b[i];
        printf("c[%d]=%d\n",i,c[i]);
	}
}
int carpma(int a[],int b[],int boyut) //dizilerimizi aldik ve dizimiz  üzerinde carpma işlemi yaptırıyoruz 
{
	int i;
	int c[boyut]; //yeni bir dizi oluşturduk ve carpma sonucunu onun üzerine ekledik
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
        c[i]=(float)a[i]/(float)b[i]; //floata çevirdim çünkü bölme işlemleri ondalıkli sonuçlar üretebilir 
        printf("c[%d]=%0.2f\n",i+1,c[i]);
	}
}

