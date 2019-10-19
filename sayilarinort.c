#include <stdio.h>
#include <conio.h>
int main (){
	int sayi;
	int toplam;
	for(int i=0;i<5;i++){
		printf("Sayýlarý giriniz=");
		scanf("%f",&sayi);
		int toplam=toplam+sayi;
	}
	float bolum=toplam/5;
	printf("Sayilarin ortalamasi=%f",bolum);

	
	return 0;
}
