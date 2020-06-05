#include <stdio.h>
int main()
{
	int i,j;
	for(i=0;i<7;i++) //ilk for döngümüz sutun kýsmýný ifade  eder
	{
		for(j=0;j<7;j++)  //ikinci for döngümüz satiri ifade eder 
		{
			if(i==0 || i==3 || i==6)  //eger satirimiz 0 indiste 3 indiste 6 indiste ise þart saðlanmýþ olur bu þartýmýz e harfinin baþlangýçýný ortasýný ve son noktasýný belli eder 
			{
				printf("*");   //satir kismimiz  j=0 dan baþlayarak 7 ye kadar yýldýzlarla dolar
			}
		}
		printf("*\n"); //eger if þartý saðlanmaz iþe döngüye girilmez her sütüna  1 adet yýldýz koyarak bir alt satýra geçme iþlemi yapýlýr "\n" ile.
	}
	return 0;
}
