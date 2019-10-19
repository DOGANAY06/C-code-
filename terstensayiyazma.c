/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int sayi;
    printf("Sayiyi giriniz tersten yazalim:");
    scanf("%d",&sayi);
    int i=1;
    while (i<=sayi){
        sayi--;
        printf(":%d",sayi);
    }
    return 0;
}
