#include <stdio.h>
#include <stdlib.h>

void mergem(int sureler[],int l ,int m,int r);
void merge_sort(int sureler[],int l,int r);
void dizi_yazdir(int sureler[],int i);
int main()
{
	int sureler[10]={10,2,3,1,4,5,6,12,9,15}; //çaðrý parametrelerinin tutulduðu süreler dizisi
	int i=0; 
	for(i=0;i<10;i++) 
	{
		printf("%d ",sureler[i]);
	}
	merge_sort(sureler,0,10-1); //sýralama algoritmamýza gönderdik elemanlarýmýzý
	dizi_yazdir(sureler,10);  //dizilerimizin içindeki elemanlarý yazdýrdýk 10 tane olarak	
	return 0;
}

void mergem(int sureler[],int l ,int m,int r) //ayýrma ve birleþtirme iþlemleri yapýlýr rekursif bir fonksiyondur.
{
    int i; 
    int j;
    int k;
    int n1 = m - l + 1;  //ana dizimizi 2 ye bölecek þekilde n1 ve n2 yi aldým
    int n2 =  r - m; 
    int gecici1[n1], gecici2[n2]; //gecici dizi oluþturdum sol ve sað için
    for (i = 0; i < n1; i++)
        gecici1[i] = sureler[l + i]; //çaðrýlarýn sürelerinin tutulduðu diziden diðer diziye eleman attým
    for (j = 0; j < n2; j++)
        gecici2[j] = sureler[m + 1+ j]; 
    i = 0; //yaptýðým iþlemlerden dolayý deðiþkenlerin sayýlarý deðiþti bunlarý eski haline cevirdim
    j = 0;
    k = l;
    while (i < n1 && j < n2) //birleþtirme iþlemlerimizin olduðu yer
    {
        
        if (gecici1[i] <= gecici2[j]) //eger sol dizideki ilk eleman sað dizideki ilk elemanýndan küçükse
        {
            sureler[k]= gecici1[i]; //sol dizideki elemanlarý çaðrýlarýn tutulduðu diziye atýyoruz
            i++;
        }
        
        else  //degilse  
        {
            sureler[k] = gecici2[j];  //sað dizinin elemanlarýnýn ilk indisinden baþlayarak atýyoruz
            j++;
        }
        
        k++; //çaðrý sürelerinin tutulduðu surelerin içindeki indis yani k  deðerini artýrýyoruz
    }
    while (i < n1)  //atama islemlerinde sol dizide boþta eleman kaldýmý kontrol ediyoruz.
    {
        sureler[k] = gecici1[i];  //varsa onlarýda atýyoruz sureler dizisinin devamýna 
        i++;
        k++;
    }
    while (j < n2)  //atama iþlemlerinde sað dizide boþ eleman kaldýysa kontrol edip 
    {
        sureler[k] = gecici2[j]; //sað dizideki elemanlarý sureler dizisinin devamýna atýyoruz
        j++;
        k++;
    }
}
void merge_sort(int sureler[],int l,int r)
{
   
    if (l < r) //sol saðdan küçükse baþa gider  0 indise 
     {
        
        int m = l+(r-l)/2; //dizinin ortasýný hesaplar 5.eleman 4.indisten ayýrýr  m= 0(10-1)/2  
        merge_sort(sureler, l, m);  
        merge_sort(sureler, m+1, r);
        mergem(sureler, l, m, r);  //merge fonksiyonuna sol orta sað indisini yolluyorum
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
	
