#include<iostream>
using namespace std;
/*���в������ݣ�ÿ�а�����������a��b(0<a,b<=100)����ʾ�����εĳ��Ϳ���a��bͬʱΪ0ʱ����ʾ�������,��������ε����*/
int main(){
    int a,b;
    while(cin>>a>>b){
        if(a==0&&b==0)
            break;
        cout<<a*b;
    }
    return 0;
}
