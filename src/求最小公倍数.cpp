/*
 * 求最小公倍数.cpp
 *
 *  Created on: 2016年7月14日
 *      Author: Pin-Wang
 */


/*
#include<iostream>
using namespace std;


//求最大公约数
int gYS(int a ,int b){
	int m,n;
	m=a>b?a:b;
	n=a>b?b:a;
	//余数
	int yu=m%n;
	//cout<<yu<<endl;
	if(yu!=0){
		return gYS(n,yu);
	}
	return n;
}


int main(){
	int a,b;
	cin>>a>>b;
	cout<<a*b/gYS(a,b);
	return 0;
}
*/
