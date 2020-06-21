//boj 2609
//2020.6.2020
//최대공약수와 최대공배수
#include <iostream>
using namespace std;

//2부터 min(a,b)까지 세어보기
int gcd_n2(int a, int b){

	int gcd=1;
	int i=min(a,b);
	bool finished=false;
	for(; i>=1; --i){
		if(a%i==0 && b%i==0){
			finished=true;
			break;
		}
	}
	if(finished==false){
		return 1;
	}else{
		return i;
	}
}

//유클리드 호제법 - 재귀
int gcd_recursive(int a, int b){

	if(b==0) return a;
	return gcd_recursive(b, a%b);
}
//유클리드 호제법 - 반복문
int gcd_iterative(int a, int b){
	
	while(b!=0){
		int r=a%b;
		a=b;
		b=r;
	}
	return a;
}

int main(){

	int a, b;

	cin >> a >> b;

	//2...n 까지 세어보기
	//cout << gcd_n2(a,b) << '\n';
	//GCD
	cout << gcd_recursive(a,b) << '\n';
	//cout << "iter: " << gcd_iterative(a,b) << '\n';

	//LCM
	//cout << "re: " << (a*b)/gcd_recursive(a,b) << '\n';
	cout << (a*b)/gcd_iterative(a,b) << '\n';
	return 0;
}

