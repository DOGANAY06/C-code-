#include <conio.h>
#include <stdio.h>
int derecelendirme(int secenek,int derecem);  //
int main()
{
    printf("Corona tespiti programimiza hosgeldiniz\nGerekli kriterleri doldurun test icin\n");
    int secenek,toplam=0,toplamim=0,derecem=0;
    do{
        printf("\nAtes=1\t,Yorgunluk=2\t,Kuru oksuruk=3\t,Solunum zorlugu=4\t,Oksuruk=5\t,Agri=6\t,Hapsirma=7\t,Burun akintisi=8\n,Burun tikanikligi=9\t,Gozlerde sulanma=10\t,Bogaz agrisi=11\t,�shal=12\t,Cikmak icin=0 basiniz\n");
        scanf("%u",&secenek); //unsigned sayi girisidir negatif sayi giremez
        switch(secenek) //secilen belirtiye g�re i�lem yapan parametre
        {
        case 1:    //eger bir se  ates derecelendirmesi yap�cak
            toplamim+=derecelendirme(secenek,derecem); //derecelendirme fonksiyonundan d�nd�r�len de�eri toplamim degiskenine ekliyoruz
            break;
        case 2:  //eger 2 ise yorgunluk gibi 
            toplamim+=derecelendirme(secenek,derecem);
            break;
        case 3:
            toplamim+=derecelendirme(secenek,derecem);
            break;
        case 4:
            toplamim+=derecelendirme(secenek,derecem);
            break;
        case 5:
            toplamim+=derecelendirme(secenek,derecem);
            break;
        case 6:
            toplamim+=derecelendirme(secenek,derecem);
            break;
        case 7:
            toplamim+=derecelendirme(secenek,derecem);
            break;
        case 8:
            toplamim+=derecelendirme(secenek,derecem);
            break;
        case 9:
            toplamim+=derecelendirme(secenek,derecem);
            break;
        case 10:
            toplamim+=derecelendirme(secenek,derecem);
            break;
        case 11:
             toplamim+=derecelendirme(secenek,derecem);
            break;
        case 12:
            toplamim+=derecelendirme(secenek,derecem);
            break;
        default:
            printf("Hatali bir tuslama eger cikmayi istiyorsaniz 0 a basiniz=");
            break;
        }
    }while(secenek!=0);  //secenek 0 a e�it olmad��� zaman bu d�ng� d�ns�n se�enek 0 ise d�ng� biter
    if(toplamim>10 && toplamim<=20){ //toplamim degiskeni >10 b�y�k ve  <=20 se 
            printf("\nSoguk alginligi ve nezle olabilirsiniz=%d",toplamim);   //so�uk alginli�i belirtileri vardir
        }
        else if(toplamim>21 && toplamim<=30){  //toplamim de�i�keni >21 den b�y�k ve <=30 se 
            printf("\nAlerji olabilirsiniz=%d",toplamim); //alerji belirtileri olabilir
        }
        else if(toplamim>31 && toplamim<=37){  //toplamim de�i�keni>31 den b�y�k ve <=37 den k���kse 
            printf("\nGrip olabilirsiniz=%d",toplamim); //grip belirtileri
        }
        else if(toplamim>=38 && toplamim<50){ //toplamim degiskeni >= 38 e�it ve toplamim <50 k���kse 
            printf("\nCorona olma ihtimaliniz vardir devlet hastanesine gidiniz=%d",toplamim);  //corona olma belirtisidir 
        }
        else{
            printf("Hicbirseyiniz yoktur yalan soylemeyiniz=%d",toplamim); //eger toplamim de�i�keni yukar�daki �artlardan hi� biri i�e hi�bir�eyiniz yoktur.
        }
        system("pause");
}
int derecelendirme(int secenek,int derecem)
{
    printf("Derecelendirmenizi yapiniz=Nadiren=2\tBazen=3\tDaima=4\t,Siddetli olarak=5\n"); //secilen hastal���n �zerinizdeki belirtisi kontrol� 
    scanf("%u",&derecem);
    return derecem; //klavyeden al�nan derecelendirmeyi d�nd�rd���m�z de�i�ken
}
