#include <iostream>
#include <vector>
#define SIZE 10000
using namespace std;

int n;

bool flag[SIZE+1];
vector<int> permutation;
vector<char> alpa;

void perm(int idx){
	
	if(idx==n){
		for(int i=0; i<n; ++i)
			printf(" %c", alpa[permutation[i]]);
		printf("\n");
		return;
	}

	for(int i=0; i<n; ++i){

		if(flag[i]==false){

			permutation.push_back(i);
			flag[i]=true;
			perm(idx+1);
			flag[i]=false;
			permutation.pop_back();
		}
	}
}
int main(){
	
	scanf("%d", &n);

	for(int i=0; i<n; ++i){
		char temp;
		scanf(" %c", &temp);
		alpa.push_back(temp);
	}

	perm(0);


	return 0;
}
