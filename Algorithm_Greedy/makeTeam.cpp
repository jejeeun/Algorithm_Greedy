/*2020�� 07�� 20��*/
/*����*/
/*�׸��� �˰��� 2875�� ��ȸor����*/

#include<stdio.h>
#include<iostream>
using namespace std;

#include "makeTeam.h"



void makeTeam() {
	//���л� �� N, ���л� �� M, ���Ͻ� ���� �ο� K
	int N, M, K;

	//�� �л� �� �б�
	cin >> N >> M >> K;

	//���ӽ��� �� �� �ο�
	int total = N + M - K;

	//������ �� ��
	int team = 0;

	while (N > 1 && M > 0 && total > 2) {
	
		N -= 2;
		M -= 1;
		total -= 3;
		team++;
	}
	cout << team;
}


	