/**
* 백준 구구단
* 입력받은 정수에 해당하는 곱셈식 (N * 1~9)을 출력하는 문제이다.
* 
* 제한사항
*****************************************
* 1 <= N <= 9							*
*****************************************
*
*
*
* 주의
* 
* 풀이시간 1분
*/
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int N;
	scanf("%d", &N);

	for (int i = 1; i < 10; ++i) {
		printf("%d * %d = %d\n", N, i, N * i);
	}
	return 0;
}