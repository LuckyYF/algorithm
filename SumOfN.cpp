#include<iostream>
#include<cmath>
using namespace std;
/*����n�������ľ���ֵ�ĺ�*/
int main(){
    int n;
    while(cin>>n&&n!=0){//nΪ0����ѭ��
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
