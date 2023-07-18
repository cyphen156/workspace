#define _CRT_SECURE_NO_WARNINGS
/*
    백준 1436 영화감독 숌
    6이 적어도 3개 이상 연속으로 들어가는 수
    like "세상의 종말 666, 세상의 종말 1666, 세상의 종말 2666"
    N번째 영화의 제목은 세상의 종말 (N번째로 작은 종말의 수) 와 같다
    이 시리즈를 항상 차례대로 만들고, 다른 영화는 만들지 않는다.
    666, 1666, 2666, 3666, 4666, 5666, 6660, 6661, 6662, 6663, 6664, 6665, 7666 8666, 9666, 
    10666, 11666, 12666, 13666, 14666, 15666, 16660, 16661 ...
*/
/*
    제한사항
    8 < N <= 10,000
*/
/*
    문제 풀이 시간 : 20분
*/
#include <stdio.h>

int main() {
    int n, i = 666, cnt = 1;
    scanf("%d", &n);

    while (cnt < n) {
        i++;
        for (int temp = i; temp >= 666; temp /= 10) {
            if (temp % 1000 == 666) {
                cnt++;
                break;
            }
        }
    }

    printf("%d\n", i);
    return 0;
}
