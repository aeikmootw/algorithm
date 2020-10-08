//boj 1929
//2020.6.22
//소수 구하기
#include <iostream>
#include <vector>
using namespace std;

int main(){

	int M, N;

	cin >> M >> N;
	
	vector<int> prime;
	vector<int> check(N+1, false);

	int pn=0;
	for(int i=2; i<=N; ++i){
		if(check[i]==false){

			prime.push_back(i); pn++;

			for(int j=i+i; j<=N; j+=i){
				check[j]=true;
			}
		}
	}

	for(auto i : prime)
		cout << i << '\n';

	return 0;
}
