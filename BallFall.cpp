#include<iostream>
#include<iomanip>
using namespace std;
/* 一球从M米高度自由下落，每次落地后返回原高度的一半，再落下。 它在第N次落地时反弹多高？共经过多少米？ 保留两位小数*/
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
