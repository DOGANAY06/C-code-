#include <stdio.h>
int sayibulma(int sayi1,int sayi2,int sayi3); //programýn baþýnda tanýmladýk çünkü daha esnek duruyor ve kodlardan önce nasýl bir iþlem yapýlacaðý belli oluyor
int main()
{
    int sayi1,sayi2,sayi3;
    printf("3 tane sayi giriniz=");
    scanf("%d %d %d",&sayi1,&sayi2,&sayi3);
    sayibulma(sayi1,sayi2,sayi3); //sayibulma fonksiyonunu içine gönderdiðimiz sayilarla çaðýrýyoruz
    return 0;
}
int sayibulma(int sayi1,int sayi2,int sayi3) //sayilar
{
    if(sayi1>sayi2 && sayi1>sayi3)  //sayi1 in diðer sayilardan büyük olup olmadýðýný karþýlaþtýrdýk 
    {
        if(sayi2>sayi3) //eger sayi1 büyükse sayi2 mi yoksa sayi3 mü büyük onu kontrol ettik
        {
         printf("%d>%d>%d",sayi1,sayi2,sayi3);
        }
        else
        {
          printf("%d>%d>%d",sayi1,sayi3,sayi2);
        }
    }
    else if(sayi2>sayi1 && sayi2>3) //sayi2 diðer sayilardan büyük mü kontrol ettik 
    {
       if(sayi1>sayi3) //eger büyükse sayi1 mi sayi3 mü daha büyük bunu kontrol ettik 
        {
         printf("%d>%d>%d",sayi2,sayi1,sayi3);
        }
        else
        {
          printf("%d>%d>%d",sayi2,sayi3,sayi1);
        }
    }
    else //hiçbiri deðilse sayi3 büyüktür
    {
        if(sayi2>sayi1) //sayi3 büyükse,sayi2 mi sayi1 mi büyük onu kontrol ettirdik  
        {
         printf("%d>%d>%d",sayi3,sayi1,sayi2);
        }
        else
        {
          printf("%d>%d>%d",sayi3,sayi1,sayi2);
        }
    }
}
