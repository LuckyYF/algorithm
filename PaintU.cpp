#include <iostream>
using namespace std;
/*���в������ݣ�ÿ�а���һ������a(0<a<100)����ʾU�Ĵ�С�������Ӧ��С��U��ÿ����U֮�䣬Ҫ��һ������*/
int main()
{
    int n;
    while(cin>>n)
    {
        for(int i=0;i<n;i++)
        {
            cout<<"*";//ÿһ�еĵ�һ��*
            for(int j=0;j<n;j++)
                cout<<' ';//n���ո�
            cout<<"*"<<endl;//ÿһ�����һ��*
        }
        for(int k=0;k<n+2;k++)
            cout<<"*";//���һ����n+2��*
        cout<<endl<<endl;
    }
    return 0;
}
