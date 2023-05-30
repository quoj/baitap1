#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

	
	char xep_loai_hoc_luc(float diem){
		if(diem >= 90){
			return ('A');
		
			}else if(diem  <= 89){
				return ('B');
				}else if(diem  <= 79){
					return ('C');
			}else if(diem  <= 69){
				return ('D');
				}else{
					return 'F';
					}
					}
					
					int main(){
						float diem;
						printf("Nhap diem cua sinh vien");
						scanf("%f",&diem);
						char xep_loai = xep_loai_hoc_luc(diem);
						printf("xep loai cua sinh vien: %c", xep_loai);
						return 0;
}


