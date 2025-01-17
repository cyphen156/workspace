/**
* 백준 15552 빠른 A+B
* 덧셈 연산을 할 때 입출력 방식을 제한하는 프로그램﻿ 최대 100만번의 입출력을 어떻게 제한시간 안에 처리할 것인가?에 대한 고려
* 
* 
* 제한사항
*****************************************
* 0 < Test T <= 1,000,000				*
* 1 <= A, B <= 1,000					*
*****************************************
*
*
*
* 주의
* cout객체를 사용할 때 버퍼를 비우는 작업에 대한 고려가 필요하다.
*
*
* 풀이시간 1분
*/
#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false); // 입출력 스트림 버퍼 동기해제
    cin.tie(NULL); // 입력시 출력 버퍼비우기(fflush) 취소
	int T;
	cin >> T;
	for (int i = 0; i < T; ++i)
	{
		int A, B;
		cin >> A >> B;
		cout << A + B << '\n';
	}
	cout << endl;
	return 0;
}