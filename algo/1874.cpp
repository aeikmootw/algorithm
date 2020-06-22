//boj 1874
//2020.6.17

#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(){

	int n;
	string str;
	stack<int> s;
	cin >> n;

	int m=0;
	while(n--){

		int x;
		cin >> x;

		if(m<x){
			while(m<x){
				s.push(++m);
				str+='+';
			}
			s.pop();
			str+='-';
		}
		else{
			bool found=false;
			int top=s.top();
			str+='-';
			s.pop();

			if(top==x){
				found=true;
			}
			if(!found){
				cout << "NO" << '\n';
				return 0;
			}
		}
	}
	for(auto x : str){
		cout << x << '\n';
	}
	return 0;
}
