#include<iostream>
using namespace std;
/*猴子吃桃问题。猴子第一天摘下若干个桃子，当即吃了一半，还不过瘾，又多吃了一个。
 第二天早上又将剩下的桃子吃掉一半，又多吃一个。以后每天早上都吃了前一天剩下的一半
 零一个。 到第N天早上想再吃时，见只剩下一个桃子了。求第一天共摘多少桃子。*/
int main(){
    int M,N,S;
    cin>>N;
    S=1;
    /*这样写的问题是M的值不确定，一直循环，系统赋给M最大值
    while(S+1==M){
    for(int i=0;i<N-1;i++){
        S=(M+S)/2+1;
    }
    }*/
    for(N=N-1;N>0;N--){
        S=(S+1)*2;
    }
    M=S;
    cout<<M<<endl;
    return 0;
}
