#include <stdio.h>
int basamagibul(int sayi);
int tersinecevir(int sayi);
int main() //main blogu alt�nda sayi giri�imizi ald�k
{
    int sayi;
    printf("Sayiyi giriniz=");
    scanf("%d",&sayi);
    basamagibul(sayi); //sayinin ka� basamakl� oldu�unu bulmak i�in basamagibul fonksiyonunu �a��rd�k
    tersinecevir(sayi);
}
int basamagibul(int sayi)
{
    int islem=0,i=0; //i=basamaksayisi,islem bo� de�i�ken
    if(sayi>0) //sayi 0 dan b�y�kse
    {
        do{
            islem=sayi%10; //sayiyinin 10 la modunu al�p islem de�iskenine (bo� bir de�i�kene)atad�k
            sayi=sayi/10;  //tekrar sayiyi 10 ile b�l�p  b�lme i�leminden ��kan sayiyi sayinin yeni de�eri yapt�k
            i++; //i  yi art�d�k yani basamak sayimizi
        }while(sayi>0); //sayi>0 dan b�y�k oldu�u her durumda d�ng�m�z� �al��t�rd�k
    }
    return i; //i de�i�kenimizi d�nd�rd�k
}
int tersinecevir(int sayi)
{
    int basamaksayisi=basamagibul(sayi); //rek�rsif bir fonksiyon, fonksiyon kendi kendini �a��rd�  bu sayede basamak sayimiz bulunmu� oldu bunu basamaksayisinin i�ine koyduk 
    printf("%d Basamakli\n",basamaksayisi);  //basamaksayimizi yazd�rd�k
    int i,islem; //i de�i�keni tanimladik d�ng�de kullanmak i�in ve islemler i�in i�lem 
    for(i=0;i<basamaksayisi;i++)
    {
        islem=sayi%10; //sayiyinin 10 ile modunu al�p islem de�i�kenine kalan� koyduk
        sayi=sayi/10; //sayiyi /10  b�l�p yeni sayi de�i�kenimizi olu�turduk
        printf("%d",islem); //kalan� g�sterdik
        if(sayi<10) //eger sayi 10 dan k���kse tekrardan kalan� bulunamayaca�� i�in 
        {
            printf("%d",sayi); //sayiyi direk olarak ekrana yazd�rd�k.
            break;
        }
    }
}
