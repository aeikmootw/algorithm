//boj 9012
//2020.6.17

#include <iostream>
#include <string>
using namespace std;

string valid(string str){
	
	int stack=0;

	for(int i=0; i<str.size(); ++i){
		if(str[i]=='('){
			stack++;
		}
		else{
			stack--;
		}
		if(stack<0) return "NO";
	}

	if(stack==0) return "YES";
	else return "NO";

}

int main(){

	int T;
	cin >> T;
	cin.ignore();

	while(T--){
		string str;
		getline(cin, str);
		
		cout << valid(str) << '\n';

	}
	
	return 0;
}

