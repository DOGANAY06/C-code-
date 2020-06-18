#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
void sifrelenmis (char *sifredizisi,int key,int n); //dinamik dizimizi ve anahtarýmýzý ve karakter uzunluðumuzu fonksiyonumuza aldýk
int main(){
	int a;
	int n;
	int i;
	char *sifredizisi; //sifremizin tutulacaðý dinamik dizi
	srand(time(NULL)); //zamana göre sifre oluþturma blogu deðiþsin diye yaptým
	printf("Kac karakter uzunlugunda sifre belirlenip sifrelensin=");
	scanf("%d",&n); 
	char harfler_sayilar[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','1','2','3','4','5','6','7','8','9','0'};
	//harfler ve sayilar dizisini random büyük harf kücük harf ve sayilar için oluþturdum
	sifredizisi=(char*)malloc(sizeof(char)*n); //dinamik dizi kaplayacaðý alan n kadar karakter uzunluðunda bir alan kaplar
    char sifrelemek[n]; //sifrelemek istediðim dizim n tane elemandan oluþacak yani sifrenin karakter uzunluðu
	if(sifredizisi==NULL)
    {
    	printf("Hafizada alan yok");
	}
	else{
	for(i=0;i<n;i++)
	{
		a=rand()%60+1; //1 den baþlayarak 60 arasýnda random bir sayýyý attým 
		sifrelemek[i]=harfler_sayilar[a]; //bu random sayým harfler_sayilar dizimin içindeki elemanlardan herhangi birini buldu ve onu msg sifrelemek istediðim dizimin elemaný yaptým
	}
	}
	sifredizisi=sifrelemek; //sifrelemek dizimi dinamik bellek yönetimi ile tanýmladým 
    int key =3; //satir degeridir bunu istersek deðiþtirebiliriz
 
    printf("Kullanilacak sifre: %s",sifredizisi);
 
    sifrelenmis(sifredizisi,key,n);
    free(sifredizisi); //hafýzada tutulan yeri serbest býrakýyorum
    return 0;
}
void sifrelenmis (char *sifredizisi,int key,int n)
{
	int uzunluk =n; //sifremizin boyunu  uzunluk parametresinde tuttuk
	int  i, j, k = -1, satir = 0, sutun = 0;  
    char matrix[key][uzunluk];  //2 boyutlu bir dizi tanýmladýk key satýrý sifrenin uzunluðu ise sutunu belirtir
 
    for(i = 0; i < key; ++i)  //satir ve sutunumuzu oluþturduk  3 satir mesajýmýz kaç boyutlu ise o kadarda sutun var
        for(j = 0; j < uzunluk; ++j)
            matrix[i][j] = '\n';
 
    for(i = 0; i < uzunluk; ++i){   //mesaj uzunluguna göre
        matrix[satir][sutun++] =*(sifredizisi+i);  //her seferinde sutunu artýrdýk cünkü 0. indisin 1.koyduk ilk,sonra 1.indisin 2.koyduk  ve dinamik dizimizin içerisinde bulunan karakterleri atadýk diðer dizimize
 
        if(satir == 0 || satir == key-1)  
            k= k * (-1); 
 
        satir = satir + k;
    }
 
    printf("\nSifrelenmis sifre: ");
    for(i = 0; i < key; ++i)
        for(j = 0; j < uzunluk; ++j) 
            if(matrix[i][j] != '\n') 
                printf("%c", matrix[i][j]); //dizinin her elamanýný ekrana yazdýrdýk
}
