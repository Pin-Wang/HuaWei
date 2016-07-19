/*
 * 超长正整数相加.cpp
 *
 *  Created on: 2016年7月17日
 *      Author: Pin-Wang
 */

/*
#include<iostream>
#include<string>
#include<queue>
using namespace std;

int main(){
	string strA,strB;
	cin>>strA>>strB;

	//queue存储数组
	queue<int> q,p;
	int r[100000]={0};
	//将string放到queue
	for(int i=strA.length()-1;i>=0;i--){
		q.push(strA[i]-'0');
	}
	for(int i=strB.length()-1;i>=0;i--){
		p.push(strB[i]-'0');
	}
	int k=0;
	while(!p.empty()&&!q.empty()){
		int a=p.front();
		int b=q.front();
		int sum=a+b+r[k];
		if(sum<10){
			r[k++]=sum;
		}
		else if(sum>=10){
			r[k]=sum%10;
			r[++k]=sum/10;

		}

		p.pop();
		q.pop();
	}
	while(!p.empty()){
		int a=p.front();
		int sum=a+r[k];
		if(sum<10){
			r[k++]=sum;
		}
		else if(sum>=10){
			r[k]=sum%10;
			r[++k]=sum/10;
		}
		p.pop();
	}
	while(!q.empty()){
			int a=q.front();
			int sum=a+r[k];
			if(sum<10){
				r[k++]=sum;
			}
			else if(sum>=10){
				r[k]=sum%10;
				r[++k]=sum/10;
			}
			q.pop();
		}

	if(r[k]!=0){
		cout<<r[k];
	}
	for(int i=k-1;i>=0;i--){
			cout<<r[i];
	}

	return 0;
}

*/
