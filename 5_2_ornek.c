#include <stdio.h>
int sayibulma(int sayi1,int sayi2,int sayi3); //program�n ba��nda tan�mlad�k ��nk� daha esnek duruyor ve kodlardan �nce nas�l bir i�lem yap�laca�� belli oluyor
int main()
{
    int sayi1,sayi2,sayi3;
    printf("3 tane sayi giriniz=");
    scanf("%d %d %d",&sayi1,&sayi2,&sayi3);
    sayibulma(sayi1,sayi2,sayi3); //sayibulma fonksiyonunu i�ine g�nderdi�imiz sayilarla �a��r�yoruz
    return 0;
}
int sayibulma(int sayi1,int sayi2,int sayi3) //sayilar
{
    if(sayi1>sayi2 && sayi1>sayi3)  //sayi1 in di�er sayilardan b�y�k olup olmad���n� kar��la�t�rd�k 
    {
        if(sayi2>sayi3) //eger sayi1 b�y�kse sayi2 mi yoksa sayi3 m� b�y�k onu kontrol ettik
        {
         printf("%d>%d>%d",sayi1,sayi2,sayi3);
        }
        else
        {
          printf("%d>%d>%d",sayi1,sayi3,sayi2);
        }
    }
    else if(sayi2>sayi1 && sayi2>3) //sayi2 di�er sayilardan b�y�k m� kontrol ettik 
    {
       if(sayi1>sayi3) //eger b�y�kse sayi1 mi sayi3 m� daha b�y�k bunu kontrol ettik 
        {
         printf("%d>%d>%d",sayi2,sayi1,sayi3);
        }
        else
        {
          printf("%d>%d>%d",sayi2,sayi3,sayi1);
        }
    }
    else //hi�biri de�ilse sayi3 b�y�kt�r
    {
        if(sayi2>sayi1) //sayi3 b�y�kse,sayi2 mi sayi1 mi b�y�k onu kontrol ettirdik  
        {
         printf("%d>%d>%d",sayi3,sayi1,sayi2);
        }
        else
        {
          printf("%d>%d>%d",sayi3,sayi1,sayi2);
        }
    }
}
