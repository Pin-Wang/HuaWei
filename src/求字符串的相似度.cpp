/*
 * 计算字符串的相似度.cpp
 *
 *  Created on: 2016年7月14日
 *      Author: Pin-Wang
 */
/*
#include<iostream>
#include<string>
using namespace std;

//求最小值
int min(int a,int b,int c){
	int mintemp=a<b?a:b;
	return mintemp<c?mintemp:c;
}

//求字符串的相似度
int distanceString(string strA,int beginA,int lengthA,string strB,int beginB,int lengthB){
	//strA为空串
	if(beginA>=lengthA){
		//strB为空串
		if(beginB>=lengthB){
			return 0;
		}
		else{
			return lengthB-beginB;
		}
	}

	//strB为空串
	else if(beginB>=lengthB){
		//strA为空串
		if(beginA>=lengthA){
			return 0;
		}
		else{
			return lengthA-beginA;
		}
	}

	else{
		if(strA[beginA]==strB[beginB]){
			return distanceString(strA,beginA+1,lengthA,strB,beginB+1,lengthB);
		}
		else{
			int min1=distanceString(strA,beginA,lengthA,strB,beginB+1,lengthB);
			int min2=distanceString(strA,beginA+1,lengthA,strB,beginB+1,lengthB);
			int min3=distanceString(strA,beginA+1,lengthA,strB,beginB,lengthB);
			return 1+min(min1,min2,min3);
		}
	}
}


int main(){
	string strA,strB;
	cin>>strA>>strB;
	int  distance=distanceString(strA,0,strA.length(),strB,0,strB.length());
	cout<<1<<"/"<<(distance+1);
	return 0;
}

*/








