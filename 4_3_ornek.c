#include <stdio.h>
int main()
{
	int i,j,a;
	int ogrenci[3][9][18];
	for(i=0;i<3;i++) //�� okulu hitap eder 
	{
		for(j=0;j<3;j++) //her okuldaki 3 ��rencidir 
		{
			for(a=0;a<2;a++)  //her okuldaki 3 ��rencinin 2 tane s�nav notudur
			{
				printf("%d.Okuldaki %d.Ogrencinin=%d notu giriniz=\n",i+1,j+1,a+1);
				scanf("%d",&ogrenci[i][j][a]); // her bir dizinin i�erisi dolduktan sonra di�erine ge�er
			}
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(a=0;a<2;a++)
			{
				printf("%d.Okuldaki %d.Ogrencinin=%d notu giriniz=%d\n",i+1,j+1,a+1,ogrenci[i][j][a]);
			}
		}
	}
	return 0;
}
