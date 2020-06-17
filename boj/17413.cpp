//boj 17413
//2020.6.17
#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(){

	string str;
	stack<char> s;

	getline(cin, str);
	str+='\n';

	bool tagflag=false;
	bool wordflag=true;

	for(char ch : str){

		if(ch=='<'){
			tagflag=true;
			if(wordflag==true){
				while(!s.empty()){
					cout << s.top();
					s.pop();
				}
				wordflag==false;
			}
			cout << ch;
		}
		else if(ch=='>'){
			tagflag=false;
			wordflag=true;
			cout << ch;
		}
		else if(ch=='\n'){
			if(wordflag==true){
				while(!s.empty()){
					cout << s.top();
					s.pop();
				}
			}
		}
		else if(ch==' '){
			if(wordflag==true){
				while(!s.empty()){
					cout << s.top();
					s.pop();
				}
				cout << ch;
				wordflag==false;
			}
		}
		else{
			if(tagflag==true){
				cout << ch;
			}
			else{
				if(wordflag==true){
					s.push(ch);
				}
				else{
					s.push(ch);
					wordflag==true;
				}
			}
		}
	}
	return 0;
}
