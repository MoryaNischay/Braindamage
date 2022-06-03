#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
int main(){
	string lolz;
	cin>>lolz;
	int a=lolz.length();
	ofstream filez("file.txt");
	filez<<lolz;
	cout<<a<<endl;
	filez.close();
	ifstream read;
	read.open("file.txt");
	string reading;
	getline(read,reading);
	cout<<reading;
	read.close();
}
