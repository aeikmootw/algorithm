//boj 2231
//2020.6.4

#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	int n;
	int sum;
	bool flag = false;

	scanf("%d", &n);

	for(int i=1; i<n; ++i){


		//분해합 구하기
		int j=i;
		sum=j;
		while(j!=0){
			sum+=j%10;
			j/=10;
		}

		//분해합과 입력받은 자연수를 비교
		if(sum==n){
			flag = true;

			//생성자 출력
			printf("%d", i);
			break;
		}
	}
	if(!flag) printf("%d", 0);
	return 0;
}
