/*2020년 07월 20일*/
/*백준*/
/*그리디 알고리즘 2875번 대회or인턴*/

#include<stdio.h>
#include<iostream>
using namespace std;

#include "makeTeam.h"



void makeTeam() {
	//여학생 수 N, 남학생 수 M, 인턴쉽 참가 인원 K
	int N, M, K;

	//각 학생 수 읽기
	cin >> N >> M >> K;

	//인텁쉽을 뺀 총 인원
	int total = N + M - K;

	//가능한 팀 수
	int team = 0;

	while (N > 1 && M > 0 && total > 2) {
	
		N -= 2;
		M -= 1;
		total -= 3;
		team++;
	}
	cout << team;
}


	