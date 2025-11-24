// p1: Calculator (Function Practice)
#include <iostream>
using namespace std;

// TODO: 實作 calculate 函數
// 參數: opcode (1-4), num1, num2
// 回傳: 根據 opcode 計算的結果

int calculate(int opcode,int a,int b){
	if(opcode==0){
		return a+b;
	}
	if(opcode==1){
		return a-b;
	}
	if(opcode==2){
		return a*b;
	}
	if(opcode==3){
		return a/b;
	}
	
} 
int main(){
	int x,y,z;
	while(cin>>x>>y>>z){
		cout<<calculate(x,y,z)<<endl;
	}
	return 0;
}
