#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
const double Pi = 3.14;
 
void chuvi(int d,int r){
	double 	P = (d+r)*2;

	printf("\nChu vi hinh tron la %0.2f",P);
	
	
}
void dientich(int d,int r){
	double S = d*r;
	
	printf("\nDien tich hinh tron la %0.2f",S);
	}
	
	int main(){
		int r,d;
		printf("\nNhap ban kinh r = ");
		scanf("%d",&r);
		printf("\nNhap dien tich d = ");
		scanf("%d",&d);
		chuvi(d,r);
		dientich(d,r);
		
		 printf("\n---------------------------\n");
		 printf("Tuan Anh");
		 return 0;
}

