#include<iostream>
#include<iomanip>
using namespace std;
/*�����������ĺ�,����2λС�� 1~a֮�� 1~b��ƽ���� 1~c�ĵ�����*/

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int s1,s2;
    double s3,s;
    s1=0;s2=0;s3=0;
    for(int i=0;i<=a;i++){
        s1=s1+i;
    }
    for(int i=1;i<=b;i++){
        s2=s2+i*i;
    }
    for(int i=1;i<=c;i++){
        s3=s3+1.0/i;
    }
    s=s1+s2+s3;
    cout<<fixed<<setprecision(2)<<s<<endl;
    return 0;
}
