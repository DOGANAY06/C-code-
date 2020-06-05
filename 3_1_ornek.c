#include <stdio.h>
#define  hour 13
int main()
{
	#if hour>12
	printf("Saat ogleden sonradir");
	#elif hour<12
	printf("Saat ogleden oncedir");
	#else 
	printf("Saat hatalidir");
	#endif
	return 0;
	
}
