#include <stdio.h>
int main()
{
	int i=0,j=0; //while d�ng�s�nde ba�lang�� de�erlerini �nceden atamaliyiz
	while(i<5) //s�t�n k�sm�m�z� belli eden d�ng�  5 s�t�nl�k y�ld�z yap�cak 
	{
		j=0; //j miz en son 5 oldu�u i�in 2. ifademizin sa�lanmasi i�in tekrar 0 dan ba�lat�yoruz
		while(j<5)  //j<5 k�c�k oldu�unda ve if �art� sa�lan�rsa d�ng� �al��acak
		{
			if(i==0 || i==2) // if sart� sa�lanmas� i�in satirimiz 0 indiste ve 2 indiste olmal�
			printf("*");  
			j++; //artma i�lemi j<5 den k�c�k olana kadar devam edip i yi art�r�p d�ng� tekrar devam edicek 
		}
		i++;
		printf("*\n");			
	}
	return 0;
}
