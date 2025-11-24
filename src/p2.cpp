// p2: Recursion Sum (遞迴求和)
#include <iostream>
using namespace std;

// TODO: 實作 sum 遞迴函數
// 參數: n (正整數)
// 回傳: 1 + 2 + 3 + ... + n 的總和
// 提示: Base case: n == 1 時回傳 1
//       Recursive case: 回傳 n + sum(n-1)

int sum(int n){
	if(n==1)return 1;
	return n+sum(n-1);
}
int main(){
	int x;
	cin>>x;
	cout<<sum(x)<<endl;
	return 0;
	
}
