#include <stdio.h>

int main(void){
    printf("%s\n",__DATE__); //g�n ay y�l bilgisi tutar
    printf("%s\n",__TIME__);  //saat dakika saniye bilgisi tutar
    printf("%d\n",__STDC__);  //C standartlar�n�n sa�lan�p sa�lanmad��� kontrol edilir sa�lan�rsa =1 sa�lanmazsa=0
    return 0;
}
