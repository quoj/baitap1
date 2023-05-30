#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include <string.h>

void hienthiMenu() {
	
	printf("---------Menu---------\n\n");
	printf("a. Kiem tra so du\n");
	printf("b. Rut tien\n");
	printf("c. Gui tien\n");
	printf("d. Thoat\n\n");
}

void Hienthisotienconlai(int soDu) {
	printf("\nSo du cua ban la %d\n", soDu);
}

int tienrut(int soDu) {
	int tienRut;
	do {
		printf("Nhap so tien ban muon rut: ");
		scanf("%d", &tienRut);
		if(tienRut > soDu) printf("So du cua ban khong du\nSo du hien tai cua ban la: %d\n", soDu);
	}while (tienRut > soDu);
	
	soDu -= tienRut;
	printf("ban da rut tien thanh cong\nSo du con lai cua ban la %d\n", soDu);
	return soDu;
}

int tiendatcoc(int soDu) {
	int tienGui;
	printf("Nhap so tien ban muon gui: ");
	scanf("%d", &tienGui);
	soDu += tienGui;
	printf("Ban da gui tien thanh cong\nSo du hien tai cua ban la %d\n", soDu);	
	return soDu;
}

void hienthithongbaothoat() {
	printf("Tam biet va gen gap lai !\n");
}
void hienthiluachonkhonghople() {
	printf("Lua chon cua ban khong hop le!\nVui long nhap lai.\n");
}

int main() {
	int soDu = 5000000;
	char luachon;
	
	
	do {
		hienthiMenu();
		
		printf("Nhap lua chon cua ban (a, b, c, d) : ");
	    scanf("%c",&luachon);
		

		switch(luachon) {
			case 'a': {
				Hienthisotienconlai(soDu);
				break;
			}
			case 'b': {
				soDu = tienrut(soDu);
				break;
			}
			case 'c': {
				soDu = tiendatcoc(soDu);
				break;
			}
			case 'd': {
				hienthithongbaothoat();
				break;
			}
			default: 
				hienthiluachonkhonghople();			
		}
		printf("\n\n");
	}
	while(luachon != 'd');

	return 0;
	getchar();
}

