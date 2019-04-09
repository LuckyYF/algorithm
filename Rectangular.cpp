#include<iostream>
using namespace std;
/*多行测试数据，每行包含两个整数a和b(0<a,b<=100)，表示长方形的长和宽。当a和b同时为0时，表示输入结束,输出长方形的面积*/
int main(){
    int a,b;
    while(cin>>a>>b){
        if(a==0&&b==0)
            break;
        cout<<a*b;
    }
    return 0;
}
