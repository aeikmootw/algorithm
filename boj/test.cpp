#include <iostream>
#include <queue>
using namespace std;

int main(){

	queue<int> que;

	que.push(1);
	que.push(2);
	que.push(3);

	printf("%d", que[0]);
	printf("%d", que[1]);

	return 0;
}
