/*2020�� 07�� 17��*/
/*����*/
/*�׸��� �˰��� 11047�� ����0*/

#include<stdio.h>
#include<iostream>
using namespace std;

#include "minCoin.h"

int A[11];

void minCoin() {

	//������������ N, ������ġ�� �� K 
	int N, K;

	//input.txt���� �� �Է¹ޱ�
	cin >> N >> K;
	
	//������ ��ġ�� ��Ÿ�� �迭 ���� (��������)

	for (int i = 0; i < N ; i++) {
		cin >> A[i];
	} 

	//�ʿ��� ���� ������ �ּҰ� minNum
	//Ž�������� ������ ������ ��ġ pickMoney
	//���õ� ������ �� �� currentMoney
	int minNum = 0;
	int pickMoney = 0;
	int currentMoney = 0;


	int i = N-1;

	//i�� 0 �̸��̸� ��� ���ذ�
	while (i >= 0) {

		//��ġ�� ���� ���� ���� ����
		pickMoney = A[i];

		//������ �� ���� K�� �ʰ��ϸ� �� ������ Ż���Ѵ�.
		//�ʰ����� ������ ������ �׼��� ���Խ�Ų��.
		if (pickMoney + currentMoney  > K) {
			i--;
		}else {
			currentMoney += pickMoney;
			minNum++;
		}
		
		//�� �׼��� K�� ���� ������ ��� �ذ�
		if (currentMoney == K) {
			cout << minNum;
			break;
		}

	}
}

