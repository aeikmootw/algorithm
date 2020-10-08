//boj 10828
//2020.6.16

#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){

//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);

	int N; cin >> N;
	string ins;
	stack<int> s;

	while(N--){
		
		cin >> ins;

		if(ins=="push"){
			int x;
			cin >> x;
			s.push(x);
		}
		else if(ins=="pop"){
			if(s.empty()) cout << -1 << '\n';
			else{
				cout << s.top() << '\n';
				s.pop();
			}
		}
		else if(ins=="size"){
			cout << s.size() << '\n';
		}
		else if(ins=="empty"){
			if(s.empty()) cout << 1 << '\n';
			else cout << 0 << '\n';
		}
		else if(ins=="top"){
			if(s.empty()) cout << -1 << '\n';
			else cout << s.top() << '\n';
		}
	}
	return 0;
}
