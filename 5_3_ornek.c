#include <stdio.h>
void iscilistesi(char isciler[10],int maas[],int n);
int main()
{
  char isciler[4][10];
  int maas[4];
  int i;
  iscilistesi(isciler[10],maas,4); //iscilerin karakter uzunlu�unu ve ka� tane i�ci girilece�ini ka� tane maas girilece�i g�nderdik 4 ile
}
void iscilistesi(char isciler[10],int maas[],int n)
{
	int i=0;
	for(i=0;i<n;i++)
	{
		printf("%d.iscinin adini ve maasini giriniz=",i+1);
		scanf("%s %d",&isciler[i],&maas[i]); 
	}
}
