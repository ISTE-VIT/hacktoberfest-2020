#include<iostream>
#include<string>
using namespace std;

// Recursive function  for removing duplicates 
void rem_dup(string str,int i){

	if((str.length()-1) == i){
    //printing the string without duplicates
		cout<<str;
		return;
	}
  
	if(str[i]==str[i+1]){
		str.erase(i,1);
		rem_dup(str,i);
	}
	else
	rem_dup(str,i+1);
  
}

int main() {
	string str;
	cin>>str;
   rem_dup(str,0);
	return 0;
}
