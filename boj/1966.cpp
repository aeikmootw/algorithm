#include <iostream>
#include <vector>
using namespace std;

typedef pair<int, int> iipair

int main(){
	
	int t;
	scanf("%d", &t);

	while(t--){
		
		int n, somedocu;
		scanf("%d %d", &n, &somedocu);

		vector<iipair> documents;

		for(int i=0; i<n; ++i){
			
			int priority;
			scanf("%d", &priority);
			documents.push_back({i, priority});
		}

	}
	return 0;
}
