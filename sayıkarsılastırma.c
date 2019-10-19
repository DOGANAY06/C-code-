/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int sayi1,sayi2,sayi3;
    printf("\n 3 sayı giriniz:");
    scanf("%d %d %d",&sayi1,&sayi2,&sayi3);
    if (sayi1>sayi2 && sayi1>sayi3 && sayi2>sayi3){
        printf("\n 1.sayi:%d>2.sayi:%d>3.sayi:%d",sayi1,sayi2,sayi3);
    }
    return 0;
}
