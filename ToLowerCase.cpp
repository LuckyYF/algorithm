#include<iostream>
#include<string>
using namespace std;

string toLowerCase(string str){
    int i;
    for(i=0;i<str.length();i++){
        if(str[i]>='A'&&str[i]<='Z'){
            str[i]+=32;
        }
    }
    return str;
}
int main(){
    string str;
    cin>>str;
    /*for(int i=0;i<str.length();i++){
     if(str[i]>='A'&&str[i]<='Z'){
            str[i]+=32;
        }
    }*/
    string b=toLowerCase(str);
    cout<<b<<endl;
    return 0;

}
