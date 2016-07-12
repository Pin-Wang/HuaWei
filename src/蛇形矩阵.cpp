//蛇形矩阵


#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;

int main(){
	int n;
	//行数
	while((scanf("%d",&n))!=EOF){
		//初始值
		int value=1;
		int** arr=new int*[n];

		//初始化二维0矩阵
		for(int i=0;i<n;i++){
			arr[i]=new int[n];
			for(int j=0;j<n;j++){
				arr[i][j]=0;
			}
		}

		int row=0,col=0;
		for(int k=0;k<n;k++){
			//每一斜行初始的行号和列号
			row=k;col=0;
			for(int m=1;m<=k+1;m++){
				arr[row][col]=value++;
				row--;
				col++;
			}
		}

		//输出蛇形矩阵
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(arr[i][j]!=0){
					cout<<arr[i][j];
					if((j+1)<n&&arr[i][j+1]!=0){
						cout<<" ";
					}
				}
			}
			cout<<endl;
		}
	}

	return 0;
}
