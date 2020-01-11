#include <stdio.h>
#include <math.h>
int main(){
	int a,b,r,newr,x[20],y[20],i=0,islem1[20],islem2[20],sonuc[20];
	printf("A degerini girer misiniz=");
	scanf("%d",&a);
	printf("B degerini girer misiniz=");
	scanf("%d",&b);
	printf("R degerini girer misiniz=");
	scanf("%d",&r);
	newr=pow(r,2);
	for(i=0;i<20;i++){
		printf("X degerini giriniz=");
		scanf("%d",&x[i]);
	}
	for(i=0;i<20;i++){
		printf("Y degerini giriniz=");
		scanf("%d",&y[i]);
	}
	for(i=0;i<20;i++){
		islem1[i]=x[i]-a;
		islem1[i]=pow(islem1[i],2);
		islem2[i]=y[i]-b;
		islem2[i]=pow(islem2[i],2);
		sonuc[i]=islem1[i]+islem2[i];
		if (sonuc[i]>newr){
			printf("Daire noktanýn disinda\n");
		}
		else if(sonuc[i]<newr){
			printf("Daire noktanin icinde\n");
		}
		else{
			printf("Daire noktada\n");
		}
	}
	return 0;
}
