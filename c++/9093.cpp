#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int N;
	stack<char> s;
	char str[1001];


	cin >> N;

	while(N--){

		int idx=0;
		cin.ignore();
		cin.getline(str, 1001);

		while(1){
			s.push(str[idx++]);
			if(str[idx]==' '){
				while(!s.empty()){
					cout << s.top();
					s.pop();
				}
				idx++;
				cout << ' ';
			}
			if(str[idx]=='\0'){
				while(!s.empty()){
					cout << s.top();
					s.pop();
				}
				cout << '\n';
				break;
			}
		}
	}
	return 0;
}
