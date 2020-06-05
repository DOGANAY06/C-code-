#include <stdio.h>
int main()
{
	char secenek;
	printf("Hangi harfle baslayan aylari gormek istersiniz buyuk harf giriniz=");
	scanf(" %c",&secenek);
	switch(secenek) //secenek isleminden alinan degerin coklu secimler parametremizde varmý kontrol etmemize yarar
	{
		case 'A': //case ifadesinde karakter bir secim yapýldýysa secilen karakterin harfini  'A'  gosteririz
			printf("A harfi ile baslayanlar=\nAralýk\nAgustos");
			break; //dongu kýrmak için kullanýlýrýz
		case 'E':
			printf("E harfi ile baslayanlar=\nEylul\nEkim");
			break;
		case 'M':
			printf("M harfi ile baslayanlar=\nMart\nMayýs");
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
			printf("K harfi ile baslayanlar=\nKasým");
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
