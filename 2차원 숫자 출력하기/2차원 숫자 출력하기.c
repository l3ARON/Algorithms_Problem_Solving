#include <stdio.h>

int main() {
	int rows, columns;	//행의 개수, 열의 개수 
	int number;			//각 칸에 출력하는 값		
	int i, j;			//반복문 사용을 위한 변수

	/*
	첫번째 행에 columns만큼의 숫자가 나오고 \n으로 줄바꿈
	두번째 행에 첫번째 행의 숫자에서 *2를 해야 됨

	i는 1부터 행의 개수만큼 반복 rows
	j는 1부터 열의 개수만큼 반복 columns
	각 행은 *i를 해줘야 됨
	*/

	printf("rows? ");
	scanf("%d", &rows);
	printf("columns? ");
	scanf("%d", &columns);

	for (i = 1; i <= rows+1; i++) {
		for (j = 1; j <= columns + 1; j++) {
			printf("%d ", j * 1);
		}
		printf("\n");
	}


	return 0;
}