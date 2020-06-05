#include <stdio.h>
#include <stdlib.h> //bu kütüphaneyi çaðýrmamýzdaki sebep malloc fonksiyonunu getirip hafýzada yer açmak
int fibonachi(int *terim,int n); 
int main()
{
    int n;
    printf("Kac terimli olmasini istersiniz="); //kaç terimli olmasini istersek o terimi alýyoruz
    scanf("%d",&n);  
    int terim[n];   //terim dizisini oluþturuyoruz 
    terim[n]=(int*)malloc(n*sizeof(int)); //hafýzada n*4 yani integer deðer kadar yer açýyoruz
    terim[0]=1;  //ilk terimimiz 1 dir 
    terim[1]=1;   //2. terimimiz yine 1 dir
    printf("%d.Fibonachi serisinin=%d adresi:\t %p",n,fibonachi(terim,n),terim); //fibonachi fonksiyonuna terim pointerýnýn ve seçilen terimi gönderdik ve çaðýrdýk sonra terimin adresini aldýk 
    free(terim); //hafýzada kaplanan alaný boþaltýrýz.
}
int fibonachi(int *terim,int n)
{
    int i;
    for(i=2;i<=n;i++){ //2 den baþlatmamýzdaki sebeb zaten 0 ve 1 terimi biz tanimladik 
        terim[i]=terim[i-1]+terim[i-2]; //fibonachi serisi secilen terimin -1 küçüðü ile  -2 küçüðü ile toplanýr ve ona atanýr 
    }
    return terim[n];
}

