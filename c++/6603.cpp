//boj 6603
//2020.6.6

#include <iostream>
#include <vector>
using namespace std;


vector<int> combi;

void solve(int idx, vector<int>& Kset, int toPick){
	
	if(toPick==0){
		for(int i=0; i<combi.size(); ++i)
			printf("%d ", Kset[combi[i]]);
		printf("\n");
		return;
	}

	for(int i=idx; i<Kset.size(); ++i){
		combi.push_back(i);
		solve(i+1, Kset, toPick-1);
		combi.pop_back();
	}
}

int main(){

	int finished = -1;
	
	int k=0;

	while(finished == -1){
		scanf("%d", &k);
		if(k==0){
			finished = -1;
			break;
		}
		int tmp;
		vector<int> Kset;

		for(int i=0; i<k; ++i){
			scanf("%d", &tmp);
			Kset.push_back(tmp);
		}
		solve(0, Kset, 6);
		printf("\n");
	}
	return 0;
}
