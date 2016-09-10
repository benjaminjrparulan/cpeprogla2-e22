#include <iostream>
#include <cstring>
using namespace std;


int myStrCmp(char* str1, char* str2){
	return strcmp(str1, str2);
	
}
int main(){

	char str1[100]="Hello";
	char str2[100]="hello";
	
	cout << myStrCmp(str1, str2);
}
