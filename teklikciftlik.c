/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int sayi;
    printf("\nBir sayi giriniz:");
    scanf("%d",&sayi);
    if(sayi%2==0){
        printf("\nSayi cift sayidir");
    }
    else if(sayi==0){
        printf("\nSayi 0 a eşittir:");
    }
    else{
        printf("\nSayi tek sayidir:");
    } 

    return 0;
}
