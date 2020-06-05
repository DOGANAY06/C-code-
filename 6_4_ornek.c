#include <stdio.h>
#include <stdlib.h> //bu k�t�phaneyi �a��rmam�zdaki sebep malloc fonksiyonunu getirip haf�zada yer a�mak
int fibonachi(int *terim,int n); 
int main()
{
    int n;
    printf("Kac terimli olmasini istersiniz="); //ka� terimli olmasini istersek o terimi al�yoruz
    scanf("%d",&n);  
    int terim[n];   //terim dizisini olu�turuyoruz 
    terim[n]=(int*)malloc(n*sizeof(int)); //haf�zada n*4 yani integer de�er kadar yer a��yoruz
    terim[0]=1;  //ilk terimimiz 1 dir 
    terim[1]=1;   //2. terimimiz yine 1 dir
    printf("%d.Fibonachi serisinin=%d adresi:\t %p",n,fibonachi(terim,n),terim); //fibonachi fonksiyonuna terim pointer�n�n ve se�ilen terimi g�nderdik ve �a��rd�k sonra terimin adresini ald�k 
    free(terim); //haf�zada kaplanan alan� bo�alt�r�z.
}
int fibonachi(int *terim,int n)
{
    int i;
    for(i=2;i<=n;i++){ //2 den ba�latmam�zdaki sebeb zaten 0 ve 1 terimi biz tanimladik 
        terim[i]=terim[i-1]+terim[i-2]; //fibonachi serisi secilen terimin -1 k����� ile  -2 k����� ile toplan�r ve ona atan�r 
    }
    return terim[n];
}

