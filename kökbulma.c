#include <stdio.h>
#include <math.h>
int main (){
	int a,b,c;
	float delta;
	float diskirmt,diskirmt2;
	printf("Denklemin gerekli değerlerini giriniz=");
	scanf("%d %d %d",&a,&b,&c);
	delta=b*b-4*a*c;
	diskirmt=(-b+(sqrt(delta)))/(2*a);
	diskirmt2=(-b-(sqrt(delta)))/(2*a);
	printf("Denklemin first kökü=%f\n",diskirmt);
	printf("Denklemin second kökü=%f\n",diskirmt2);
	return 0;
}
