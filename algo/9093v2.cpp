//boj 9093
//2020.6.16
//강의 소스

#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	string str;
	stack<char> s;
	
	cin >> N;
	cin.ignore();

	while(N--){

	getline(cin, str);
	str+='\n';

		for(char ch : str){
			if(ch==' ' || ch=='\n'){
				while(!s.empty()){
					cout << s.top();
					s.pop();
				}
				cout << ch;
			}
			else s.push(ch);
		}
	}
	return 0;
}
