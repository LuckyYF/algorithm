#include<iostream>
#include<iomanip>
using namespace std;
/*��һ�������У�2/1��3/2��5/3��8/5��13/8��21/13...���������е�ǰN��ͣ�������λС��*/
int main(){
    double a,b,t,n;
    a=2;b=1;
    double s;
    s=a/b;
    cin>>n;
    for(int i=1;i<n;i++){
        t=b;
        b=a;
        a=a+t;
        s=s+a/b;
    }
    cout<<fixed<<setprecision(2)<<s<<endl;
    return 0;
}
