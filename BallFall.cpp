#include<iostream>
#include<iomanip>
using namespace std;
/* һ���M�׸߶��������䣬ÿ����غ󷵻�ԭ�߶ȵ�һ�룬�����¡� ���ڵ�N�����ʱ������ߣ������������ף� ������λС��*/
int main(){
    int N;
    double h,S,M,H;
    cin>>M>>N;
    S=0;
    h=M;
    for(int i=0;i<N;i++){
        if(i==0){
            S=h;
        }
        else{
        S=S+2*h;
        }
        h=h/2;
    }
    cout<<fixed<<setprecision(2)<<h<<" "<<S<<endl;
    return 0;
}
