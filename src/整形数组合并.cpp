/*
 * 整形数组合并.cpp
 *
 *  Created on: 2016年7月19日
 *      Author: Pin-Wang
 */

#include<iostream>
#include<set>
using namespace std;

int main()
{
    int num1,num2,temp;
    set<int> iset;
    cin>>num1;
    for(int i=0;i<num1;i++)
        {
            cin>>temp;
            iset.insert(temp);
        }
    cin>>num2;
    for(int i=0;i<num2;i++)
        {
            cin>>temp;
            iset.insert(temp);
        }
    for(set<int>::iterator it=iset.begin();it!=iset.end();it++)
        cout<<*it;
    return 0;
}

