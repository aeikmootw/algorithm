//boj 1158
//2020.6.17
#include <iostream>
#include <queue>
using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, K;
	queue<int> que;

	cin >> N >> K;
	
	int idx=0;
	while(idx++<N) que.push(idx);
	
	cout << '<';
	while(que.size()!=1){
		
		int cnt=0;
		while(cnt++<K-1){
			que.push(que.front());
			que.pop();
		}
		cout << que.front() << ", ";
		que.pop();
	}
	cout << que.front() << '>';

	return 0;
}
