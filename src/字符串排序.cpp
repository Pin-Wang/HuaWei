/*
 * 字符串排序.cpp
 *
 *  Created on: 2016年7月12日
 *      Author: Pin-Wang
 */

/*
#include<iostream>
#include<string>
using namespace std;


//比较英文字母大小
bool charBiJiao(char a,char b){
	return toupper(a)>toupper(b);
}
//英文字母冒泡排序
void bubble(char str[],int n){
	//将数组中的字母取出
	char alpha[128];
	int index=0;
	for(int i=0;i<n;i++){
		if(isalpha(str[i])){
			alpha[index++]=str[i];
		}
	}
	alpha[index]='\0';
	//对alpha冒泡排序
	for(int i=1;alpha[i]!='\0';i++){
		bool tag=true;
		for(int j=0;j<index-i;j++){
			if(charBiJiao(alpha[j],alpha[j+1])){
				char temp=alpha[j];
				alpha[j]=alpha[j+1];
				alpha[j+1]=temp;
				tag=false;
			}
		}
		if(tag==true){
			break;
		}
	}
	//将排序好的alpha放到原始数组
	int index1=0;
	for(int i=0;i<n;i++){
		if(isalpha(str[i])){
			str[i]=alpha[index1++];
		}
	}
}

int main(){
	string str;
	getline(cin,str);
		char *c=new char[str.length()];
		int i=0;
		for(i;i<str.length();i++){
			c[i]=str[i];
		}
		c[i]='\0';
		bubble(c,str.length());
		for(int i=0;i<str.length();i++){
				cout<<c[i];
		}
	return 0;
}
*/



