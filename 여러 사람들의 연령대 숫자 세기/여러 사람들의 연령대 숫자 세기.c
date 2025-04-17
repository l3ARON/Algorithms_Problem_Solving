#include <stdio.h>

/*
최대 100명까지 사람들의 태어난 년도를 입력받아 그 값을 배열로 저장하되, 
2020보다 큰 년도가 입력되기 전까지 태어난 년도를 반복하여 입력받도록 하여라.
이 때, 생년을 받아서 연령대 번호를 리턴하는 함수를 만들어 사용하라
*/

int ageToGroup(int b);
// 파라미터 : 태어난 년도 (b)
// 리턴값 : 연령대에 따른 번호 -> 유아 0, 어린이 1, 청소년 2, 중년 4, 노년 5
// 수행내용 태어난 년도를 통해 연령대를 계산하고, 연령대에 따른 번호 리턴

/*
반복이 끝나면 지금까지 입력된 사람들의 각자 나이를 계산하여 출력
나이에 따라 유아, 어린이, 청소년, 중년, 노년 여부를 판단하여 
각각 몇 명인지 출력
나이 = 올해년도 - 태어난 년도 + 1

b < 7			유아
7 <= b < 13		어린이
13 <= b < 20	청소년
20 <= b < 30	청년
30 <= b < 60	중년
60 <= b			노년
*//*
2020보다 높은 숫자가 입력 될때까지 무한 반복되는 함수 
while 무한 반복문 사용
count_person 변수를 사용하여 카운트
만약 count_person이 2020보다 크다면 break;
*/

int main() {
	int birth_year = 0;
	int year[100];
	int count_person = 0;
	int count[6] = {0};


	while (1) {
		printf("%d번째 사람의 태어난 년도를 입력하시오. ", count_person + 1);
		scanf_s("%d", &birth_year);

		if (birth_year > 2020)	break;
		else
		{
			year[count_person] = birth_year;
			count_person++;
		}
	}


	for (int i = 0; i < count_person;i++) {
		printf("%d번째 사람의 나이는 %d입니다. \n", i+1, 2024 - year[i] + 1);
		count[ageToGroup(2024 - year[i] + 1)]++;
	}


	printf("유아는 %d명입니다.\n", count[0]);
	printf("어린이는 %d명입니다.\n", count[1]);
	printf("청소년는 %d명입니다.\n", count[2]);
	printf("청년는 %d명입니다.\n", count[3]);
	printf("중년는 %d명입니다.\n", count[4]);
	printf("노년는 %d명입니다.\n", count[5]);



	
	return 0;
}

int ageToGroup(int b) {

	if (b < 7)	return 0;
	else if (7 <= b && b < 13)	return 1;
	else if (13 <= b && b < 20)	return 2;
	else if (20 <= b && b < 30)	return 3;
	else if (30 <= b && b < 60)	return 4;
	else if (60 <= b)		return 5;

}


