#include <iostream>
#include <vector>
#define INF 987654321
using namespace std;

int N;
int maxv = -INF;
int minv = INF;

const int operators[] = {'+', '-', '*', '/'};

vector<int> setOfOper;
vector<int> num;
vector<bool> flag;
vector<int> permutation;

void solve(int idx){

	//연산자 조합을 모두 골랐을때
	if(idx == N-1){

		int calcSum=num[0];
		for(int i=0; i<permutation.size(); ++i){

			int oper=permutation[i];
			if(oper=='+') calcSum+=num[i+1];
			else if(oper=='-') calcSum-=num[i+1];
			else if(oper=='*') calcSum*=num[i+1];
			else if(oper=='/') calcSum/=num[i+1];
		}
		//각 케이스에 대한 최대 최소
		if(maxv<calcSum) maxv = calcSum;
		if(minv>calcSum) minv = calcSum;
		return;
	}

	//N-1개의 연산자에 대한 순열
	for(int i=0; i<setOfOper.size(); ++i){

		if(flag[i]==false){
			permutation.push_back(setOfOper[i]);
			flag[i]=true;
			solve(idx+1);
			permutation.pop_back();
			flag[i]=false;
		}
	}
}

int main(){

	//연산될 숫자 입력
	scanf("%d", &N);
	for(int i=0; i<N; ++i){
		int temp;
		scanf("%d", &temp);
		num.push_back(temp);
	}
	//연산자 입력 후 저장
	for(int i=0; i<4; ++i){
		int temp;
		scanf("%d", &temp);

		while((temp--)!=0){
			setOfOper.push_back(operators[i]);
			flag.push_back(false);
		}
	}
	
	solve(0);
	printf("%d\n%d", maxv, minv);

	return 0;
}
