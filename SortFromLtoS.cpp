#include<iostream>
#include<algorithm>
using namespace std;
/*���в������ݣ�ÿ�а���1������n(0<n<100)��ʾ�����ĸ�������n��32λ��������ÿ̨�����Ŀ���ʱ�䡣
��n������������Ȼ���������ÿ������ÿ�����ĺ���Ҫ��һ���ո�*/
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
