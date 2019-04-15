#include<iostream>
using namespace std;
/*求三个数的最小公倍数*/
int lcm(int x,int y){//两个数的最小公倍数
    int a,m,n;
    m=x;n=y;
    while(y!=0){
        a=x%y;
        x=y;
        y=a;
    }
    return m*n/x;
}
int main(){
    int x,y,z,m;
    cin>>x>>y>>z;
    m=lcm(lcm(x,y),z);
    cout<<m<<endl;
    return 0;
}
