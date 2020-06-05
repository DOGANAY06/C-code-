#include <stdio.h>
int main()
{
	int sicaklik;
	printf("Hava sicakligini giriniz=");
	scanf("%d",&sicaklik);
	if(sicaklik>20)
	{
		printf("Hava sicaktir");
	}
	else if(sicaklik>5 && sicaklik<20)
	{
		printf("Hava iliktir");
	}
	else
	{
		printf("Hava soguktur");
	}
	return 0;
}
