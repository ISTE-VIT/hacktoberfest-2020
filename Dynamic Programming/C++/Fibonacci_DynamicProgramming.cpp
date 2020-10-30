#include <iostream>
using namespace std;

int main(){
	int numSearch;
	cin >> numSearch;
	
	// set array and base case
	int fib[numSearch] = {0};
	fib[0] = 0; fib[1] = 1; //base case
	if(numSearch == 0){ cout << 0; return 1;} //Print output base case
	if(numSearch == 1){ cout << 1; return 1;} //Print output base case
	
	//Fibonacci function
	for(int i=2; i<=numSearch; i++){
		fib[i] = fib[i-1] + fib[i-2];
	}
	
	//Print output
	cout << fib[numSearch];
	return 1;
}
