//boj 17298
//2020.6.18
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;	

	stack<int> s;
	vector<int> ans(N);
	vector<int> v(N);

	for(int i=0; i<N; ++i){
		cin >> v[i]; 
	}

	for(int i=0; i<N; ++i){
		if(s.empty())
			s.push(i);
		while(!s.empty() && v[s.top()] < v[i]){
			ans[s.top()]=v[i];
			s.pop();
		}
		s.push(i);
	}
	while(!s.empty()){
		ans[s.top()] = -1;
		s.pop();
	}

	for(int i=0; i<N; ++i){
		cout << ans[i] << ' ';
	}
	cout << '\n';
	return 0;
}
