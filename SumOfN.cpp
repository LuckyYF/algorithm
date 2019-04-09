#include<iostream>
#include<cmath>
using namespace std;
/*计算n个整数的绝对值的和*/
int main(){
    int n;
    while(cin>>n&&n!=0){//n为0跳出循环
        int a,s=0,i=0;
        while(i<n){
            i++;
            cin>>a;
            s=s+abs(a);
        }
        cout<<s;
    }
    return 0;
}
