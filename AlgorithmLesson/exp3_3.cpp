// 蜂房问题

#include <iostream>
#include <string>
using namespace std;
string f1,f2,f;
int n,m;
string P (string & num,string add){
    int g=0;
    if(num.length()<add.length()){
        string t=num;
        num=add;
        add=t;
    }
    string t (num.length()-add.length(),'0');
    add= t+add;
    int len1=num.length(),len2=add.length();
    for(int i=len1-1;i>=0;i--){
        int t=((num[i]-'0') +(add[i]-'0') + g);
        num[i]=t%10+'0';
        g=t/10;
    }
    if(g!=0){
        num.insert(0,string(1,(char)g+'0'));
    }
    return num;
}
int main (void){
    while(cin>>m>>n&&n &&m){
        f1="1";
        f2="2";
        for(int i=3;i<=n-m;i++){
            f=P(f1,f2);
            f1=f2;
            f2=f;
        }
        cout<<f2<<endl;
    }
    return 0;
}
