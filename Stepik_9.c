#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int l = 0;
	scanf("%d", &l);
	switch(l / 10){ // 69 / 10 = 6
		case 2:
			printf(" 20");
			break;
		case 3: 
			printf(" 30");
			break;
		case 4: 
			printf(" 40");
			break;
		case 5:
			printf(" 50");
			break;
		case 6:
			printf(" 60");
			break;
	}
	switch(l % 10){
		case 1:
			printf(" 1");
			break;
		case 2: 
			printf(" 2");
			break;
		case 3: 
			printf(" 3");
			break;
		case 4: 
			printf(" 4");
			break;
		case 5: 
			printf(" 5");
			break;
		case 6: 
			printf(" 6");
			break;
		case 7: 
			printf(" 7");
			break;
		case 8: 
			printf(" 8");
			break;
		case 9: 
			printf(" 9");
			break;
	}
	switch(l % 10){
		case 1: 
			printf(" 1");
			break;
		case 2: 
			printf(" 2");
			break;
		case 3: 
			printf(" 3");
			break;
		case 4: 
			printf(" 4");
			break;
		case 5: 
			printf(" 5");
			break;
		case 6: 
			printf(" 6");
			break;
		case 7: 
			printf(" 7");
			break;
		case 8: 
			printf(" 8");
			break;
		case 9: 
			printf(" 9");
			break;
		case 0: 
			printf(" 0");
			break;
	}
    return 0;
}   