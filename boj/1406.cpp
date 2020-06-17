//boj 1406.cpp
//2020.6.17
#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	string str;
	stack<char> left, right;

	cin >> str;

	for(auto x : str) left.push(x);
	
	cin >> N;

	while(N--){
		char ins;
		cin >> ins;

		if(ins=='L'){
			if(!left.empty()){
				right.push(left.top());
				left.pop();
			}
		}else if(ins=='D'){
			if(!right.empty()){
				left.push(right.top());
				right.pop();
			}
		}else if(ins=='B'){
			if(!left.empty()){
				left.pop();
			}
		}else if(ins=='P'){
			char c;
			cin >> c;
			left.push(c);
		}
	}

	while(!left.empty()){
		right.push(left.top());
		left.pop();
	}
	while(!right.empty()){
		char top=right.top();
		right.pop();
		cout << top;
	}
	return 0;
}
