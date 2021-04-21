#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int ex_1 = 0;
	int ex_2 = 0;
	int ex_3 = 0;
	scanf("%d %d %d", &ex_1, &ex_2, &ex_3);
	if(ex_1 == -1 || ex_2 == -1 || ex_3 == -1 || ex_1 == 2 || ex_2 == 2 || ex_3 == 2){
		printf("не сдал");
	}
	else if(ex_1 == 3 || ex_2 == 3 || ex_3 == 3){
		printf("троечник");
	}
	else if(ex_1 == 4 || ex_2 == 4 || ex_3 == 4){
		printf("хорошист");
	}
	else{
		printf("отличник");
	}
    return 0;
}   