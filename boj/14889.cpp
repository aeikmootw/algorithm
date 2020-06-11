//boj 14889
//2020.6.11

#include <iostream>
#include <vector>
#include <cmath>
#define SIZE 20
#define INF 987654321
using namespace std;

int N;
int S[SIZE+1][SIZE+1];
bool check[SIZE+1];

int start[10];
int link[10];
bool flag[10];

vector<int> v;

int sp=0;
int lp=0;

void perm(int r){

	if(r==0){
		int x=v[0];
		int y=v[1];
		sp+=S[start[x]][start[y]];
		lp+=S[link[x]][link[y]];
		return;
	}

	for(int i=0; i<N/2; ++i){
		if(flag[i]==false){
			flag[i]==true;
			v.push_back(i);
			perm(r-1);
			flag[i]=false;
			v.pop_back();
		}
	}
}

int solve(int idx, int toPick){
	
	if(toPick==0){
		int s=0, l=0;
		for(int i=0; i<N; ++i){
			if(check[i]==true) start[s++]=i;
			else link[l++]=i;
		}
		sp=0; lp=0;
		perm(2);
		return abs(sp-lp);
	}
	int ret=INF;
	for(int i=idx; i<N; ++i){
		
		check[i]=true;
		ret = min(ret, solve(i+1, toPick-1));
		check[i]=false;
	}
	return ret;
}
int main(){

	scanf("%d", &N);
	for(int i=0; i<N; ++i){
		for(int j=0; j<N; ++j){
			scanf("%d", &S[i][j]);
		}
	}
	printf("%d", solve(0, N/2));
	return 0;
}
