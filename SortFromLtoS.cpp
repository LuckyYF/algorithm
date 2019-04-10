#include<iostream>
#include<algorithm>
using namespace std;
/*多行测试数据，每行包含1个整数n(0<n<100)表示机器的个数，和n个32位整数代表每台机器的开机时间。
对n个数降序排序，然后依次输出每个数，每个数的后面要有一个空格*/
int main(){
    int n;
    while(cin>>n){
        int a[100];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n,greater<int>());
        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}
