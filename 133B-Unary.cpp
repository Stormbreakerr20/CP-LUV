#include<iostream>
#include<stack>
#include<map>
#include<string>
using namespace std;
int pow(int a,int b,long long m){
    if(b==0) return 1;
    if(b==1) return a;

    if(b&1) return ((a%m)*(pow(((a%m)*(a%m))%m,b/2,m)%m))%m;
    else return pow(((a%m)*(a%m))%m,b/2,m)%m;
}
int main(){
    map<char,int> m;
    m['>'] = 8;
    m['<'] = 9;
    m['+'] = 10;
    m['-'] = 11;
    m['.'] = 12;
    m[','] = 13;
    m['['] = 14;
    m[']'] = 15;

    string inp;
    cin>>inp;

    long long ans = 0;
    long long mod = 1e6+3;

    for(int i=inp.length()-1;i>=0;i--) {
        ans += ((pow(16,inp.length()-i-1,mod)%mod)*(m[inp[i]])%mod)%mod;
    }

    cout<<ans%mod;

}


// divyanshu
// gyg7g7g