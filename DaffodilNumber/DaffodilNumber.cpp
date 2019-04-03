#include<iostream>
using namespace std;
int main(){
    int a,b,c,x;
    for(x=100;x<=999;x++){
        a = x%10;
        b = x/10%10;
        c = x/100;
        if(x==a*a*a+b*b*b+c*c*c){
            cout<<x<<" ";
        }
    }
    return 0;
}
