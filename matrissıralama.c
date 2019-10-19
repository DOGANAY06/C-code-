/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int matris[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}}; //4 e 4 lük sütün satlırı matris tanımladık onun içlerini doldurduk 
    //printf("%d",matris[1][3]); //tek tek sayı çekeriz
    for (int i=0; i<=3;i++){   //satirlari yazdirmak icin
        for (int k=0; k<=3;k++){  //sütünları yazdırmak için 
            printf("%d",matris[i][k]); 
            printf(",");
        }
         printf("-");
    }

    return 0;
}
