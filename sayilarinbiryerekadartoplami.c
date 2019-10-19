/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int sayi;
    printf(" Sayi giriniz=");
    scanf("%d",&sayi);
    int toplam=0;
    int i=0;
    while (i<=sayi){
        toplam=toplam+i; //önce toplicazz i ile sonra i++ yapıcaz 
        i++;
    }
    printf("\n Girilene kadar toplami:%d",toplam);
    return 0;
}
