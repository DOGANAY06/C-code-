#include <stdio.h>
int main()
{
	char secenek;
	printf("Hangi harfle baslayan aylari gormek istersiniz buyuk harf giriniz=");
	scanf(" %c",&secenek);
	switch(secenek) //secenek isleminden alinan degerin coklu secimler parametremizde varm� kontrol etmemize yarar
	{
		case 'A': //case ifadesinde karakter bir secim yap�ld�ysa secilen karakterin harfini  'A'  gosteririz
			printf("A harfi ile baslayanlar=\nAral�k\nAgustos");
			break; //dongu k�rmak i�in kullan�l�r�z
		case 'E':
			printf("E harfi ile baslayanlar=\nEylul\nEkim");
			break;
		case 'M':
			printf("M harfi ile baslayanlar=\nMart\nMay�s");
			break;
		case 'O':
			printf("O harfi ile baslayanlar=\nOcak");
			break;
		case 'N':
			printf("N harfi ile baslayanlar=\nNisan");
			break;
		case 'S':
			printf("S harfi ile baslayanlar=\nSubat");
			break;
		case 'K':
			printf("K harfi ile baslayanlar=\nKas�m");
			break;
		case 'H':
			printf("H harfi ile baslayanlar=\nHaziran");
			break;
		case 'T':
			printf("T harfi ile baslayanlar=\nTemmuz");
			break;
		default:
			printf("Hatali bir harf tuslamasi");
	}
	return 0;
}
