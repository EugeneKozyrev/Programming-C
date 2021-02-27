#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Russian");
	float l = 0;
	scanf("%f", &l);
	int i = (int) l;
	int j = (int) (l * 100) % 100; // 22.21 * 100 = 2221 % 100 = 21
    if(l > 100){
        return 0;
    }    
	else if(i == 0 && j == 0){
		printf("0 рублей");
	}
	else if(i == 100){
		printf("100 рублей");
	}
	else if(i % 10 == 0) {
		switch (i / 10){
			case 1:
				printf("%d рублей ", i);
				break;
			case 2:
				printf("%d рублей ", i);
				break;
			case 3:
				printf("%d рублей ", i);
				break;
			case 4:
				printf("%d рублей ", i);
				break;
			case 5:
				printf("%d рублей ", i);
				break;
			case 6:
				printf("%d рублей ", i);
				break;
			case 7:
				printf("%d рублей ", i);
				break;
			case 8:
				printf("%d рублей ", i);
				break;
			case 9:
				printf("%d рублей ", i);
				break;
		}
        if(j % 10 == 0){
			switch (j / 10){
			case 1:
				printf("%d копеек", j);
				break;
			case 2:
				printf("%d копеек", j);
				break;
			case 3:
				printf("%d копеек", j);
				break;
			case 4:
				printf("%d копеек", j);
				break;
			case 5:
				printf("%d копеек", j);
				break;
			case 6:
				printf("%d копеек", j);
				break;
			case 7:
				printf("%d копеек", j);
				break;
			case 8:
				printf("%d копеек", j);
				break;
			case 9:
				printf("%d копеек", j);
				break;
			}
		}
        else if(j == 11){
            printf("%d копеек", j);
        }
        else if(j == 12){
            printf("%d копеек", j);
        }
        else if(j == 13){
            printf("%d копеек", j);
        }
        else if(j == 14){
            printf("%d копеек", j);
        }
        else if(j == 15){
            printf("%d копеек", j);
        }
        else if(j == 16){
            printf("%d копеек", j);
        }
        else if(j == 17){
            printf("%d копеек", j);
        }
        else if(j == 18){
            printf("%d копеек", j);
        }
        else if(j == 19){
            printf("%d копеек", j);
        }
		else{
			switch (j % 10){
			case 1:
				printf("%d копейка", j);
				break;
			case 2:
				printf("%d копейки", j);
				break;
			case 3:
				printf("%d копейки", j);
				break;
			case 4:
				printf("%d копейки", j);
				break;
			case 5:
				printf("%d копеек", j);
				break;
			case 6:
				printf("%d копеек", j);
				break;
			case 7:
				printf("%d копеек", j);
				break;
			case 8:
				printf("%d копеек", j);
				break;
			case 9:
				printf("%d копеек", j);
				break;
			}
		}
	}
	else{
        if(i == 11){
            printf("%d рублей", i);
        }
        else if(i == 12){
            printf("%d рублей", i);
        }
        else if(i == 13){
            printf("%d рублей", i);
        }
        else if(i == 14){
            printf("%d рублей", i);
        }
        else if(i == 15){
            printf("%d рублей", i);
        }
        else if(i == 16){
            printf("%d рублей", i);
        }
        else if(i == 17){
            printf("%d рублей", i);
        }
        else if(i == 18){
            printf("%d рублей", i);
        }
        else if(i == 19){
            printf("%d рублей", i);
        }
        else{
        	switch (i % 10){
				// case 1:
				// 	printf("%d рубль ", i);
				// 	break;
				case 2:
					printf("%d рубля ", i);
					break;
				case 3:
					printf("%d рубля ", i);
					break;
				case 4:
					printf("%d рубля ", i);
					break;
				case 5:
					printf("%d рублей ", i);
					break;
				case 6:
					printf("%d рублей ", i);
					break;
				case 7:
					printf("%d рублей ", i);
					break;
				case 8:
					printf("%d рублей ", i);
					break;
				case 9:
					printf("%d рублей ", i);
					break;
			}
        }
		if(j % 10 == 0){
			switch (j / 10){
			case 1:
				printf("%d копеек", j);
				break;
			case 2:
				printf("%d копеек", j);
				break;
			case 3:
				printf("%d копеек", j);
				break;
			case 4:
				printf("%d копеек", j);
				break;
			case 5:
				printf("%d копеек", j);
				break;
			case 6:
				printf("%d копеек", j);
				break;
			case 7:
				printf("%d копеек", j);
				break;
			case 8:
				printf("%d копеек", j);
				break;
			case 9:
				printf("%d копеек", j);
				break;
			}
		}
		else{
			switch (j % 10){
			case 1:
				printf("%d копейка", j);
				break;
			case 2:
				printf("%d копейки", j);
				break;
			case 3:
				printf("%d копейки", j);
				break;
			case 4:
				printf("%d копейки", j);
				break;
			case 5:
				printf("%d копеек", j);
				break;
			case 6:
				printf("%d копеек", j);
				break;
			case 7:
				printf("%d копеек", j);
				break;
			case 8:
				printf("%d копеек", j);
				break;
			case 9:
				printf("%d копеек", j);
				break;
			}
		}
	}
    return 0;
}