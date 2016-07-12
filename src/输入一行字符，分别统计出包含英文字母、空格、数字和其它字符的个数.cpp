//输入一行字符，分别统计出包含英文字母、空格、数字和其它字符的个数


#include<iostream>
#include<string>
using namespace std;

/*
int main(){
	string str;
	getline(cin,str);

	while(str.length()!=0){
		int digitCount=0;
		int alphaCount=0;
		int otherCount=0;
		int spaceCount=0;

		for(int i=0;i<str.length();i++){
			if(isdigit(str[i])){
				digitCount++;
			}
			else if(isalpha(str[i])){
				alphaCount++;
			}
			else if(str[i]==' '){
				spaceCount++;
			}
			else{
				otherCount++;
			}
		}

		cout<<alphaCount<<endl;
		cout<<spaceCount<<endl;
		cout<<digitCount<<endl;
		cout<<otherCount<<endl;
		getline(cin,str);
	}
	return 0;
}

*/
