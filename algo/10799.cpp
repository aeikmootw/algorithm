//boj 10799
//2020.6.18
#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie();

	int sum=0;
	stack<int> s;
	string str;
	
	getline(cin, str);

	for(int i=0; i<str.size(); ++i){
		if(str[i]=='('){
			s.push(i);
		}
		else{
			if(s.top()+1==i){
				s.pop();
				sum+=s.size();
			}else{
				s.pop();
				sum+=1;
			}
		}
	}
	cout << sum << '\n';
	return 0;
}
