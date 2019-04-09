#include <iostream>
using namespace std;
/*多行测试数据，每行包含一个整数a(0<a<100)，表示U的大小。输出对应大小的U，每两个U之间，要有一个空行*/
int main()
{
    int n;
    while(cin>>n)
    {
        for(int i=0;i<n;i++)
        {
            cout<<"*";//每一行的第一个*
            for(int j=0;j<n;j++)
                cout<<' ';//n个空格
            cout<<"*"<<endl;//每一行最后一个*
        }
        for(int k=0;k<n+2;k++)
            cout<<"*";//最后一行有n+2个*
        cout<<endl<<endl;
    }
    return 0;
}
