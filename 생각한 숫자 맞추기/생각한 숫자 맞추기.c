#include <stdio.h>

int main() {
	int answer = 30;	//1, 2, 0 중에서 하나의 숫자를 받아드릴 변수
	float Q = 50;
	float max = 100;	//예상가는 범위 중 최대 숫자
	float min = 0;	//예상가는 범위 중 최소 숫자
	
	int i = 1;
	while (answer != 0) {
		printf("How about %.0f? (try more : 1, try less : 2, right : 0) ", Q);
		scanf("%d", &answer);

		if (answer == 1) {
			min = Q;

			Q = max + min;
			Q = Q / 2;
		}else if (answer == 2) {
			max = Q;

			Q = max + min;
			Q = Q / 2;
		}else {
			printf("%d tried", i);
		}
		i++;
	}
	


	return 0;
}
