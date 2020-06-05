#include <stdio.h>
#define sicaklik 30 //önce tanimliyoruz
#undef sicaklik //iptal edicez 

int main(void){
    #if defined MAX
    #error sicaklik tanimli
    printf("Sicaklik tanimli\n");
    #else
    printf("Sicaklik tanimli degil\n");
    #endif
    #if !defined sicaklik2
    printf("Sicaklik 2 tanimli degil\n");
    #else
    printf("Sicaklik 2 tanimli\n");
    #endif
    return 0;
}
