#include <stdio.h>
#include <string.h>
void sayisirala(int sayi1,int sayi2){
  if (sayi1>sayi2){
    printf("%d>%d",sayi1,sayi2);
  }
  else if(sayi2>sayi1){
    printf("%d>%d",sayi2,sayi1);
  }
  else if(sayi1==sayi2){
    printf("%d==%d",sayi1,sayi2);
  }
}
int main(void) {
  int sayi1;
  int sayi2;
  printf("1.sayi giriniz:");
  scanf("%d",&sayi1);
  printf("2.sayi giriniz:");
  scanf("%d",&sayi2);
  sayisirala(sayi1,sayi2);
  return 0;
}