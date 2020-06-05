#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct isci{  //structýmýzý tanimladik 
	char namesurname[20]; 
	char mevki[20];
	int maaas;
}isci; 
int main()
{
	isci isci1; //sýnýf açtýk normal 
	isci *isci2;
	isci2=(isci*)malloc(sizeof(isci)); //hafýzada isci2 ye yer ayýrdýk 
	
	printf("Iscinin ad soyadi giriniz=\n"); 
	gets(isci1.namesurname); //sýnýfa isim soyisim mevki maas ekledik 
	printf("Iscinin mevkisi=\n");
	gets(isci1.mevki);
	printf("Iscinin maasi=\n");
	scanf("%d",&isci1.maaas);
	printf("2.Iscinin ad soyadi giriniz=\n"); 
	fflush(stdin); //tamponu temizlemek için kullandým çünkü gets ile aldýðým namesurname deðerini görmeden mevki bölümüne geciyordu.
	gets(&isci2->namesurname); //2.iscimize namesurname  deðerini arada boþluk olmadan almak için kullandýk.Pointer olduðu için baþýna &koyduk
	printf("2.Iscinin mevkisi=\n");
	scanf("%s",&isci2->mevki);
	printf("2.Iscinin maasi=\n");
	scanf("%d",&isci2->maaas);  
	printf("\nTanimli isci adi ve soyadi=%s",isci1.namesurname);  //bu verileri ekrana yazdýrdýk
	printf("\n Tanimli isci mevkisi=%s",isci1.mevki);
	printf("\n Tanimli isci maasi=%d",isci1.maaas);
	printf("\nTanimli isci adi ve soyadi=%s",&isci2->namesurname);  //bu verileri ekrana yazdýrdýk pointer oldugu için ekrana yazdirmada -> kullandik 
	printf("\n Tanimli isci mevkisi=%s",isci2->mevki);
	printf("\n Tanimli isci maasi=%d",isci2->maaas);
	return 0;
}
