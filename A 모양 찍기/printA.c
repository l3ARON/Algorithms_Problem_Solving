#include <stdio.h>
/*
A모양 찍기
A의 수평한 선은 전체 줄 개수의 중산 줄에서 표시하면 된다.

3줄 - 2번째 줄이 중간선
7줄 - 4번재 줄이 중간선
10줄 - 6번째 줄이 중간선
*//*
1. 중간줄은 어떻게 확인할 것인가
ㄴ size /2 +1이 중간 줄이다.

일단 오른쪽으로 기울어져 있는 대각선을 만들자 

2. 중간줄에는 *이 몇개 필요한가 
1 3 5 7 9 
2*(몇번째 줄)-1 만큼 *이 들어간다

3. 두번재 줄 이후부터 *이 하나가 출력이 된 후, 몇개의 빈칸이 필요한가
0 1 3 5 7 9 
2*(몇번째 줄 - 1) -1 만큼 빈칸이 들어간다


*/

int main() {
	int height = 0;	//입력받은 크기
	int i = 0, j = 0;	//반복문에서 사용할 변수

	printf("size? ");

	if (scanf("%d", &height) != 1 || height <= 0) {
		printf("잘못된 입력입니다. 프로그램을 종료합니다.\n");
		return 1;
	}
	
	for (i = 1; i <= height; i++) {	//각 줄의 앞부분 여백 출력
		for (j = 1; j <= height - i; j++) {
			printf(" ");
		}
		if (i == height / 2 + 1){	// 중간 줄에서 별을 출력
			for (j = 1;j <= i * 2 - 1;j++) {
				printf("*");
			} 
		}else {	// 중간 줄이 아닌 부분에서 *을 일단 하나만 출력
			printf("*");
			// 추가적인 여백을 출력하는 내용이 들어갈 부분
			for (j = 1;j <= (i-1) * 2 - 1;j++) {
				printf(" ");
			}
			if(i != 1)	printf("*");	//첫째줄을 제외하고 *이 출력
		}
		printf("\n");	// 줄바꿈
	}

	return 0;
}