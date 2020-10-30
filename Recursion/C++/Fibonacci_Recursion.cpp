#include <iostream>
using namespace std;

int fib(int a){
	if (a == 0){ return 0;} //Base case
	else if (a == 1){ return 1;} //Base case
	else { return fib(a-1)+fib(a-2);}
}


int main(){
	int fibNum;
	cin >> fibNum;
	cout << fib(fibNum);
}
