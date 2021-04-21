#include <stdio.h>

int main(){
	int N,x,y;
	scanf("%d", &N);
	int mass[1000];
	for (int i = 0; i < N; ++i){
		scanf("%d", &mass[i]);
	}
	for (int i = 0; i < N; ++i){
		if (mass[i] % 2 != 0){
			continue;
		}
		x = mass[i];
		y = i;
		for (int j = i + 1; j < N; ++j){
			if (mass[j] % 2 != 0){
				continue;
			}
			if (mass[j] < x){
			x = mass[j];
			y = j;
			}
		}
	if (y != i){
		int z = mass[i];
		mass[i] = mass[y];
		mass[y] = z;
	}
}

	for (int i = 0; i < N; ++i){
		printf("%s%d", i == 0 ? "": " ", mass[i]);
	}
	return 0;
}