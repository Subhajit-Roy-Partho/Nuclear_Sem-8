#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	ifstream file;
	file.open("../N2 Gamma/Co57.Spe");
	if (file.is_open()){
		string word;
		while(getline(file, word)){
			if(isspace(word[0])!= 8192){
				continue;
			}
			std::string::size_type sz;
			int buffer = std::stoi (word,&sz);
			cout<<buffer<<endl;
		}
		
	}
	return 0;
}
