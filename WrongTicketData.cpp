#include<iostream>
#include<algorithm>
using namespace std;
/*题目：1458
某涉密单位下发了某种票据，并要在年终全部收回。
每张票据有唯一的ID号。全年所有票据的ID号是连续的，但ID的开始数码是随机选定的。
因为工作人员疏忽，在录入ID号的时候发生了一处错误，造成了某个ID断号，另外一个ID重号。
你的任务是通过编程，找出断号的ID和重号的ID。
假设断号不可能发生在最大和最小号。
输入：
要求程序首先输入一个整数N(N< 100)表示后面数据行数。
接着读入N行数据。
每行数据长度不等，是用空格分开的若干个（不大于100个）正整数（不大于100000），
请注意行内和行末可能有多余的空格，你的程序需要能处理这些空格。
每个整数代表一个ID号。
输出：
要求程序输出1行，含两个整数m  n，用空格分隔。
其中，m表示断号ID，n表示重号ID
样例输入：
2
5  6  8  11  9
10  12  9  */

int main(){
    const int maxn=100005;
    int a[maxn]={0};
    int N,pos=0;
    cin>>N;
    while(N--){
        while(cin>>a[pos]){
            pos++;
        if(cin.get()=='\n')
            break;
        }
    }
    int m=a[0],n=a[0];
    sort(a,a+pos);
    for(int i=0;i<pos;i++){
        if(a[i]!=a[i-1]+1&&a[i]!=a[i-1]){
            m=a[i]-1;
        }
        if(a[i]==a[i-1]){
            n=a[i];
        }
    }
    cout<<m<<" "<<n<<endl;
    return 0;
}
