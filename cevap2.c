#include <stdio.h>
#include <stdlib.h>

void mergem(int sureler[],int l ,int m,int r);
void merge_sort(int sureler[],int l,int r);
void dizi_yazdir(int sureler[],int i);
int main()
{
	int sureler[10]={10,2,3,1,4,5,6,12,9,15}; //�a�r� parametrelerinin tutuldu�u s�reler dizisi
	int i=0; 
	for(i=0;i<10;i++) 
	{
		printf("%d ",sureler[i]);
	}
	merge_sort(sureler,0,10-1); //s�ralama algoritmam�za g�nderdik elemanlar�m�z�
	dizi_yazdir(sureler,10);  //dizilerimizin i�indeki elemanlar� yazd�rd�k 10 tane olarak	
	return 0;
}

void mergem(int sureler[],int l ,int m,int r) //ay�rma ve birle�tirme i�lemleri yap�l�r rekursif bir fonksiyondur.
{
    int i; 
    int j;
    int k;
    int n1 = m - l + 1;  //ana dizimizi 2 ye b�lecek �ekilde n1 ve n2 yi ald�m
    int n2 =  r - m; 
    int gecici1[n1], gecici2[n2]; //gecici dizi olu�turdum sol ve sa� i�in
    for (i = 0; i < n1; i++)
        gecici1[i] = sureler[l + i]; //�a�r�lar�n s�relerinin tutuldu�u diziden di�er diziye eleman att�m
    for (j = 0; j < n2; j++)
        gecici2[j] = sureler[m + 1+ j]; 
    i = 0; //yapt���m i�lemlerden dolay� de�i�kenlerin say�lar� de�i�ti bunlar� eski haline cevirdim
    j = 0;
    k = l;
    while (i < n1 && j < n2) //birle�tirme i�lemlerimizin oldu�u yer
    {
        
        if (gecici1[i] <= gecici2[j]) //eger sol dizideki ilk eleman sa� dizideki ilk eleman�ndan k���kse
        {
            sureler[k]= gecici1[i]; //sol dizideki elemanlar� �a�r�lar�n tutuldu�u diziye at�yoruz
            i++;
        }
        
        else  //degilse  
        {
            sureler[k] = gecici2[j];  //sa� dizinin elemanlar�n�n ilk indisinden ba�layarak at�yoruz
            j++;
        }
        
        k++; //�a�r� s�relerinin tutuldu�u surelerin i�indeki indis yani k  de�erini art�r�yoruz
    }
    while (i < n1)  //atama islemlerinde sol dizide bo�ta eleman kald�m� kontrol ediyoruz.
    {
        sureler[k] = gecici1[i];  //varsa onlar�da at�yoruz sureler dizisinin devam�na 
        i++;
        k++;
    }
    while (j < n2)  //atama i�lemlerinde sa� dizide bo� eleman kald�ysa kontrol edip 
    {
        sureler[k] = gecici2[j]; //sa� dizideki elemanlar� sureler dizisinin devam�na at�yoruz
        j++;
        k++;
    }
}
void merge_sort(int sureler[],int l,int r)
{
   
    if (l < r) //sol sa�dan k���kse ba�a gider  0 indise 
     {
        
        int m = l+(r-l)/2; //dizinin ortas�n� hesaplar 5.eleman 4.indisten ay�r�r  m= 0(10-1)/2  
        merge_sort(sureler, l, m);  
        merge_sort(sureler, m+1, r);
        mergem(sureler, l, m, r);  //merge fonksiyonuna sol orta sa� indisini yolluyorum
    }
}
void dizi_yazdir(int sureler[],int a) //son olarak dizimin yeni halini ekrana yazan fonksiyon
{
	int i=0;
	printf("\n");
	for(i=0;i<a;i++)  
	{
		printf("%d ",sureler[i]); //dizimin yeni halini ekrana yazar.
	}
}
	
