#include <stdio.h>
#include <string.h>
int main(){
	int sayi1=121;
	int sayi2=235;
	char kelime='c';
	int *pointerone,*pointertwo;
	pointerone=&sayi1;
	pointertwo=&sayi2;
printf("1.sayinin degeri:%d \n 1.Sayinin belekteki adresi :%d\n 1 sayinin belekteki adresi (hektadecimal cinsinden):%x\n",sayi1,&sayi1,&sayi1);
printf("2.sayinin degeri:%d \n 2.Sayinin belekteki adresi :%d\n 2 sayinin adresi hektadecimal cinsinden:%x ",sayi2,&sayi2,&sayi2);
printf("pointerone bellekte kaplad覺g覺 yer:%x\n",&pointerone);
printf("pointertwo bellekte kaplad覺g覺 yer:%x\n",&pointertwo);
printf("1.sayinin degeri:%d \n 1.Sayinin belekteki adresi :%d\n 1 sayinin belekteki adresi (hektadecimal cinsinden):%x\n",*pointerone,&pointerone,&pointerone);
printf("2.sayinin degeri:%d \n 2.Sayinin belekteki adresi :%d\n 2 sayinin adresi hektadecimal cinsinden:%x ",*pointertwo,&pointertwo,&pointertwo);
pointerone+=2;
printf("Pointer art�rma:%d \n :%x",pointerone,&pointerone); 
*pointertwo+=2;
printf("Pointer art�rma:%d \n :%x",*pointertwo,&pointertwo);
int sayi3=*pointertwo+5;
printf("\n %d",sayi3);
char isim[20];
int *pointerisim;
pointerisim=&isim[3];
printf("\n %x",pointerisim);
return 0;
}
