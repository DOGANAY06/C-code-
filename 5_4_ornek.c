#include <stdio.h>
#include <stdlib.h> //rand fonksiyonunu çaðýrmak için kullandýk rand fonksiyonu rastgele sayý atmaya yarar 
#include <time.h> //zamana göre yani programýn çalýþmasýna göre yeni sayilar gönderir
int zaratma(int deney); //zar atma deneyini yapmasýný saðlayan deney
int main()
{
    int yuz;
    int deney;
    int i;
    printf("Kac kere zar atma deneyi yapmak istersiniz\n"); //zar atma deneyinin kaç kere olacaðýný 
    scanf("%d",&deney);
    zaratma(deney); //zaratma fonksiyonuna deneyi gönderdik çünkü deney kadar zar atma iþlemi yapýlmalý
}
int zaratma(int deney)
{
	{
    srand(time(NULL)); //her program çalýþtýðýnda rastgele sayý deðerleri deðiþsin
    int zarim;
    int i=0;
    int toplam1=0,toplam2=0,toplam3=0,toplam4=0,toplam5=0,toplam6=0;
    for(i=0;i<deney;i++){
      zarim=rand()%6+1; //1 ile 6 arasýnda bir sayý atar zarim deðiþkenine 
      printf("\nZar=%d",zarim); 
    switch(zarim)
    {
        case  1: //rastgele atanan sayi 1 se 
            toplam1++;  //toplam1 artar 
            break;
        case 2: //rastgele atanan  sayi 2 ise 
            toplam2++; //toplam2 artar
            break;
        case 3: //rastgele atanan sayi 3 ise 
            toplam3++;  //toplam3 artar
            break;
        case 4:  //rastgele atanan sayi 4 ise 
            toplam4++; //toplam4 artar
            break;
        case 5:  //rastgele atanan sayi 5 ise
            toplam5++; //toplam5 artar
            break;
        case 6: //rastgele atanan sayi 6 ise 
            toplam6++; //toplam6 artar
            break;
    }
    }
    printf("\n1 gelme frekansi=%d,\n2 gelme frekansi=%d,\n3 gelme frekansi=%d,\n4 gelme frekansi=%d,\n5 gelme frekansi %d,\n6 gelme frekansi=%d",toplam1,toplam2,toplam3,toplam4,toplam5,toplam6);
}
}
