#include<iostream>
#include<cmath>
using namespace std;
bool prime(int x){
    int y;
    for(y=2;y<=sqrt(x);y++){
        if(x%y==0)
            return false;
    }
    return true;

}

int main(){
    int n,i;
    cin>>n;
    if(n<=1){
        cout<<"error!"<<endl;
        return 0;
    }
    for(i=2;i<=n;i++){
        if(prime(i))
            cout<<i<<" ";

    }
     return 0;
}
