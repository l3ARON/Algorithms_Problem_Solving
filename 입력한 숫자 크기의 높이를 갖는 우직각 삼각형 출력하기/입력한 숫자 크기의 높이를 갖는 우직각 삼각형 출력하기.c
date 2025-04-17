#include <stdio.h>

int main() {
	/*
	입력한 크기의 높이를 갖는 우직각 삼각형 출력하기
	높이와 여백을 정하는 숫자 두개를 입력받아 
	그 숫자만큼의 높이와 왼쪽 여백을 갖는 우직각 삼각형을 *로 출력
	*/
	int height;	//높이
	int blank;	//여백
	int i, j;	//반복문을 위한 변수

	printf("height? ");
	scanf_s("%d", &height);
	printf("blank? ");
	scanf_s("%d", &blank);

	/*
	한 줄의 길이는 height + blank
	1부터 height + blank까지 빈칸 or *을 출력하면 됨

	한 줄에 i의 크기만큼 *출력
	height + blank - i만큼 빈칸 출력

	마지막에는 \n출력
	
	1부터 height까지 반복
	*/

	for (i = 1; i <= height; i++) {
		for (j = 1; j <= height + blank - i; j++) {
			printf(" ");
		}
		for (j = 1;j <= i;j++) {
			printf("*");
		}
		printf("\n");
	}


	return 0;
}