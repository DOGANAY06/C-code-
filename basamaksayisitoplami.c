/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int sayi;
    printf("Sayi giriniz:");
    scanf("%d",&sayi);
    int birler=sayi%10;
    printf("\n Birler basamagi:%d",birler);
    int onler=(sayi%100)/10;
    printf("\n Onlar basamagi:%d",onler);
    int yuzler=sayi/100;
    printf("\n Yuzler basamagi:%d",yuzler);
    int toplam=birler+onler+yuzler;
    printf("\n Basamaklarin toplami:%d",toplam);
    return 0;
}
