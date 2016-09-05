
#include <iostream>
using namespace std;

int main(){

	int n;
	cout << "Please enter in a number:";
	cin >> n;

	if (n == 0){
		return 0;
	}

	if(n == 1){
		return 1;
	}

	int prev = 0;
	int curr = 1;
	int next = 0;

	for(int i = 2; i <= n; i++){
		next = prev + curr;
		prev = curr;
		curr = next;
	}
	
	cout << next << endl; 
	return next;
}
