#include <stdio.h>
#include <math.h>

int main() {
	float n = 3; // задаётся колличество комнат
	float cout_rooms = 0;
	float N_room = 0;
	float N_comfort = 0;
	float N_days = 0;
	float N_cost = 0;
	float cost_2 = 0;
	float cost_all = 0;
	float percente = 0;
	float price = 0;

	for(int i = 0; i < n; i++){
		//printf("Введите через пробел: номер комнаты, номер комфортности, колличество дней, стоймость за день\n");
		printf("Enter: number of room, number of comfort, count of days, cost per day\n");
		scanf("%f %f %f %f", &N_room, &N_comfort, &N_days, &N_cost);
		price = N_days * N_cost;
		if(N_comfort == 2){
			cost_2 += price;
		}
		else{
			cost_all += price;
		}
	}

	percente = cost_2 / (cost_all +  cost_2);
	printf("%.1f percents \n", percente * 100);
    return 0;
}