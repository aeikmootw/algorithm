//boj 7568
//2020.6.4

#include <iostream>
#include <vector>
using namespace std;


void solve(vector<pair<int,int>>& mans, int idx, vector<int>& ranking){
	
	if(idx==mans.size()) return;

	//덩치가 더 큰 사람의 경우
	int rank=0;
	for(int i=0; i<mans.size(); ++i){
		if(i!=idx){
			if(mans[i].first>mans[idx].first &&
					mans[i].second>mans[idx].second){
				rank++;
			}
		}
	}
	//등수를 계산
	ranking.push_back(rank+1);
			
	solve(mans, idx+1, ranking);
}

int main(){
	
	int N;
	pair<int, int> man;
	vector<int> ranking;
	vector<pair<int,int>> mans;
	
	scanf("%d", &N);

	for(int i=0; i<N; ++i){
		int w, h;
		scanf("%d %d", &w, &h);
		man.first = w;
		man.second = h;
		mans.push_back(man);
	}

	solve(mans, 0, ranking);
	for(int i=0; i<ranking.size(); ++i){
		if(i==ranking.size()-1) printf("%d", ranking[i]);
		else printf("%d ", ranking[i]);
	}

	return 0;
}
