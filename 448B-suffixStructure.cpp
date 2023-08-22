#include<bits/stdc++.h>
using namespace std;
bool automaton(string s,string t){
    int n=0;
    for(int i=0;i<=s.length() && n<t.length();i++){
        n+= (s[i] == t[n]);
    }
    return n == t.length();
}

bool array_fix(string s, string t){
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    return s==t;

}

bool both(string s, string t){

    for(auto i:t){
        int index = s.find(i);
        if(index == -1) return false;
        s[index] ='0';
    }
    return true;

}

int main(){
    string s,t;
    cin>>s>>t;
    string temp=s;

    if(automaton(s,t)) cout<<"automaton"<<endl;
    else if(array_fix(s,t)) cout<<"array"<<endl;
    else if(both(s,t)) cout<<"both";
    else cout<<"need tree";

}