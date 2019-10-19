/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int yas;
    printf("\n Yasiniz kac:");
    scanf("%d",&yas);
    char isim[12];
    char soyisim[12];
    printf("\n İsiminiz :");
    scanf("%s",&isim);
    printf("\n Soyisiminiz :");
    scanf("%s",&soyisim);
    if(yas>=21){
        printf("\n Hoşgeldiniz:%s \n BAy/Bayan:%s",isim,soyisim);
        printf("\n Askere gidebilirsiniz:");
    }
    else if(yas=="ogrenci"){
        printf("\n Ogrencisiniz askerligi tecil edin:");
    }
    else{
        printf("\n Askere gidemezsiniz yasiniz kucuk:");
    }

    return 0;
}
