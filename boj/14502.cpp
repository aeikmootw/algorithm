//boj 14502
//2020.6.4 - 6.6

// nCr 8C3 = 64 63 62/3 2 1 = 41664
// 충분히 작음


#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

const int MAXN=8;
const int MAXM=8;

const int dx[] = { 1, -1, 0, 0 };
const int dy[] = { 0, 0, -1, 1 };

typedef pair<int,int> iipair;

int N, M;
int cnt=0;

vector<int> combi;
int research[MAXN][MAXM];
int visited[MAXN][MAXM];

void makewall(vector<iipair>& safe, int makewall){
	for(int i=0; i<combi.size(); ++i){

		int x = safe[combi[i]].first;
		int y = safe[combi[i]].second;
		
		research[x][y]+=makewall;
	}
}

void initvisited(){
	for(int i=0; i<N; ++i){
		for(int j=0; j<M; ++j){
			if(research[i][j]!=0){
				visited[i][j] = 1;
			}
		}
	}
}

void dfs(int x, int y){

	for(int i=0; i<4; ++i){	

	 	int	nextX = x+dx[i];
		int nextY = y+dy[i];

		if(nextX<0 || nextY<0 || nextX>N-1 || nextY>M-1 || 
				visited[nextX][nextY]!=0) continue;

		cnt++;
		visited[nextX][nextY] = 1;
		dfs(nextX, nextY);
	}
}

int solve(vector<iipair>& virus, vector<iipair>& safe, int toPick){
	
	//벽 3개를 골랐다면
	if(toPick==0){

		int ret=safe.size()-combi.size();

		makewall(safe, 1);	//벽을세우고
		initvisited();		//각 케이스 마다 방문 불가능 한 위치를 초기화
		
		//DFS로 순회하며 바이러스로 오염된 구간을 카운트 
		for(int i=0; i<virus.size(); ++i){

			dfs(virus[i].first, virus[i].second);
			
			ret-=cnt;
			cnt=0;
		}
		makewall(safe, -1);	//벽을 세우기 전 상태로 만듬
		memset(visited, 0, sizeof(visited));
		return ret-cnt;
	}

	int ret = 0;
	int next=combi.empty()? 0 : combi.back()+1;

	// 최대 64C3의 경우로 연구소 구조 선택
	for(int i=next; i<safe.size(); ++i){
		combi.push_back(i);
		ret = max(ret, solve(virus, safe, toPick-1));
		combi.pop_back();
	}
	return ret;
}
int main(){
	
	vector<iipair> virus;
	vector<iipair> safe;

	scanf("%d %d", &N, &M);

	int tmp;
	for(int i=0; i<N; ++i){
		for(int j=0; j<M; ++j){

			scanf("%d", &tmp);
			if(tmp==0) safe.push_back({i,j});
			if(tmp==2){
				virus.push_back({i,j});
				visited[i][j] = 1;
			}
			if(tmp==1) visited[i][j] = 1;
			research[i][j] = tmp;
		}
	}

	printf("%d", solve(virus, safe, 3));
	return 0;
}
