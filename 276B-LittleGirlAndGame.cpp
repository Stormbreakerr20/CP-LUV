#include<bits/stdc++.h>
using namespace std;
bool ispalindrome_possible(string s){
    sort(s.begin(),s.end());
    if(s.length()&1){
        bool odd=0;
        int c=0;
        int l=0;
        int r=0;
        while(r<s.length()){
            if(s[l] == s[r]) c++,r++;
            else{
                if(!odd && c&1) odd=1;
                else if(odd && c&1) return false;
                c=0;
                l=r;
            }
        }
    }
    else{
        int c=0;
        int l=0;
        int r=0;
        while(r<s.length()){
            if(s[l] == s[r]) c++,r++;
            else{
                if(c&1) return false;
                c=0;
                l=r;
            }
        }
    }
    return true;
}
int main(){
    string s;
    cin>>s;
    bool c=0;

    while(!ispalindrome_possible(s)){
        string temp ="";
        bool removed_one=0;
        for(auto i:s) {
            if(temp.find(i)  == -1 || removed_one)  temp.push_back(i);
            else removed_one=1;
        }
        if(temp.length() == s.length()) temp.pop_back();
        s = temp;
        c=!c;
    } 

    if(!c) cout<<"First";
    else cout<<"Second";
}