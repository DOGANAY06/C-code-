#include <stdio.h>
int basamagibul(int sayi);
int tersinecevir(int sayi);
int main() //main blogu altýnda sayi giriþimizi aldýk
{
    int sayi;
    printf("Sayiyi giriniz=");
    scanf("%d",&sayi);
    basamagibul(sayi); //sayinin kaç basamaklý olduðunu bulmak için basamagibul fonksiyonunu çaðýrdýk
    tersinecevir(sayi);
}
int basamagibul(int sayi)
{
    int islem=0,i=0; //i=basamaksayisi,islem boþ deðiþken
    if(sayi>0) //sayi 0 dan büyükse
    {
        do{
            islem=sayi%10; //sayiyinin 10 la modunu alýp islem deðiskenine (boþ bir deðiþkene)atadýk
            sayi=sayi/10;  //tekrar sayiyi 10 ile bölüp  bölme iþleminden çýkan sayiyi sayinin yeni deðeri yaptýk
            i++; //i  yi artýdýk yani basamak sayimizi
        }while(sayi>0); //sayi>0 dan büyük olduðu her durumda döngümüzü çalýþtýrdýk
    }
    return i; //i deðiþkenimizi döndürdük
}
int tersinecevir(int sayi)
{
    int basamaksayisi=basamagibul(sayi); //rekürsif bir fonksiyon, fonksiyon kendi kendini çaðýrdý  bu sayede basamak sayimiz bulunmuþ oldu bunu basamaksayisinin içine koyduk 
    printf("%d Basamakli\n",basamaksayisi);  //basamaksayimizi yazdýrdýk
    int i,islem; //i deðiþkeni tanimladik döngüde kullanmak için ve islemler için iþlem 
    for(i=0;i<basamaksayisi;i++)
    {
        islem=sayi%10; //sayiyinin 10 ile modunu alýp islem deðiþkenine kalaný koyduk
        sayi=sayi/10; //sayiyi /10  bölüp yeni sayi deðiþkenimizi oluþturduk
        printf("%d",islem); //kalaný gösterdik
        if(sayi<10) //eger sayi 10 dan küçükse tekrardan kalaný bulunamayacaðý için 
        {
            printf("%d",sayi); //sayiyi direk olarak ekrana yazdýrdýk.
            break;
        }
    }
}
