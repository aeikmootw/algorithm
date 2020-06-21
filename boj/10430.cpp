//boj 10430
//2020.6.19
#include <iostream>
using namespace std;

int main(){

	int A, B, C;

	cin >> A >> B >> C;

	cout << (A+B)%C << '\n';
	cout << ((A%C)+(B%C))%C << '\n';
	cout << (A*B)%C << '\n';
	cout << ((A%C)*(B%C))%C << '\n';

	return 0;
}
