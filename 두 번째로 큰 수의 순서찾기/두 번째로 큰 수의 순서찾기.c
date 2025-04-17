#include <stdio.h>
/*
10개의 숫자를 입력받아 배열에 저장한 후, 이 중에서 두번째로 큰 수가 몇번째 숫자인지 찾아내어 출력
*//*
1. 10개의 숫자를 입력받아서 배열에 저장
2. 가장 큰 수를 찾아서 first에 저장
	num[0]을 first에 저장, 그렇게 num[9]까지 비교, 만약 fisrt보다 크면 바꿔서 저장
3. 두번째로 큰 수 찾기
	num[0]을 second에 저장, 이때, second보다 크고 first보다 작으면 second에 저장, second_max_index에는 i를 저장
	*/

int main() {
	int num[10];	//10개의 숫자
	int first;		//첫번째로 큰 수
	int second;		//두번째로 큰 수
	int second_max_index;		//두 번째로 큰 수의 인덱스
	int i;			//반목문을 위한 변수

	// 10개의 숫자 입력받기
	for (i = 0;i <= 9;i++) {
		printf("%d번째 수를 입력하시오. ", i + 1);
		scanf_s("%d", &num[i]);
	}
	//first 찾기
	first = num[0];
	for (i = 1;i <= 9;i++) {
		if (first < num[i])	first = num[i];
	}

	//second 찾기
	second = num[0];
	for (i = 0;i <= 9;i++) {
		if (second < num[i] && num[i] < first) {
			second = num[i];
			second_max_index = i;
		}
	}

	printf("두 번째로 큰 수는 %d번째 수 %d입니다.", second_max_index+1, second);
	

	

	return 0;
}