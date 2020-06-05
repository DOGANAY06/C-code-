#include <stdio.h>
int main()
{
	int i=0,j=0; //while döngüsünde baþlangýç deðerlerini önceden atamaliyiz
	while(i<5) //sütün kýsmýmýzý belli eden döngü  5 sütünlük yýldýz yapýcak 
	{
		j=0; //j miz en son 5 olduðu için 2. ifademizin saðlanmasi için tekrar 0 dan baþlatýyoruz
		while(j<5)  //j<5 kücük olduðunda ve if þartý saðlanýrsa döngü çalýþacak
		{
			if(i==0 || i==2) // if sartý saðlanmasý için satirimiz 0 indiste ve 2 indiste olmalý
			printf("*");  
			j++; //artma iþlemi j<5 den kücük olana kadar devam edip i yi artýrýp döngü tekrar devam edicek 
		}
		i++;
		printf("*\n");			
	}
	return 0;
}
