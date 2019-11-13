#include <iostream>
#include <fstream>

using namespace std;

int main(){
	char ch;	ifstream fin;
	fin.open("as3_2.cpp");	//ass3_2.cpp is the name of the current file
	while(!fin.eof()){
		fin.read((char*)&ch, sizeof(ch));
		cout << ch;
	}
	return 0;
}
