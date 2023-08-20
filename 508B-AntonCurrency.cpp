#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;

    long long l=0;
    long long r=s.length()-1;
    string maxi="-1";
    long long index=-1;

    while(l<r){
        if(s[l]&1) l++;
        else{
            swap(s[l],s[r]);
            if(maxi=="-1") maxi =s,index=l;
            else{
                if(s[index]> (maxi[index])) maxi = s,index=l;
            }
            swap(s[l++],s[r]);
        }
    }
    
    if(maxi[0] == '-') cout<<"-1";
    else {
        cout<<maxi;
    }
}