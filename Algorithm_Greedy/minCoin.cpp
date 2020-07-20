/*2020년 07월 17일*/
/*백준*/
/*그리디 알고리즘 11047번 동전0*/

#include<stdio.h>
#include<iostream>
using namespace std;

#include "minCoin.h"

int A[11];

void minCoin() {

	//동전종류개수 N, 동전가치의 합 K 
	int N, K;

	//input.txt에서 값 입력받기
	cin >> N >> K;
	
	//동전의 가치를 나타낸 배열 정렬 (오름차순)

	for (int i = 0; i < N ; i++) {
		cin >> A[i];
	} 

	//필요한 동전 개수의 최소값 minNum
	//탐욕적으로 선택한 동전의 가치 pickMoney
	//선택된 동전의 총 합 currentMoney
	int minNum = 0;
	int pickMoney = 0;
	int currentMoney = 0;


	int i = N-1;

	//i가 0 미만이면 사례 미해결
	while (i >= 0) {

		//가치가 가장 높은 동전 선택
		pickMoney = A[i];

		//동전의 총 합이 K를 초과하면 그 동전은 탈락한다.
		//초과하지 않으면 동전을 액수에 포함시킨다.
		if (pickMoney + currentMoney  > K) {
			i--;
		}else {
			currentMoney += pickMoney;
			minNum++;
		}
		
		//총 액수와 K의 값이 같으면 사례 해결
		if (currentMoney == K) {
			cout << minNum;
			break;
		}

	}
}

