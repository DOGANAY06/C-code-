#include <stdio.h>

int main(void){
    printf("%s\n",__DATE__); //gün ay yýl bilgisi tutar
    printf("%s\n",__TIME__);  //saat dakika saniye bilgisi tutar
    printf("%d\n",__STDC__);  //C standartlarýnýn saðlanýp saðlanmadýðý kontrol edilir saðlanýrsa =1 saðlanmazsa=0
    return 0;
}
