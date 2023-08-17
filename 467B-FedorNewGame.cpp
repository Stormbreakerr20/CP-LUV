#include<bits/stdc++.h>
using namespace std;

string deci_to_string(int n,int types){
    string s1="";
    while(n) {
 	s1 += (n%2) + '0';
    n /= 2;
    }
    int x= s1.length();
    while((types - x)){
        s1 += '0';
        types--;
    }
    reverse(s1.begin(),s1.end()); // 1100100
    return s1;
}
int main(){
    
    int players,types,k_diff;
    cin>>types>>players>>k_diff;
    players++;

    stack<string> s;
    long long int ans=0;
    while(players--){
        int input;
        cin>>input;
        s.push(deci_to_string(input,types));
    }


    while(s.size()>1){
        string feddor = s.top();
        s.pop();
        string next_player = s.top();
        s.pop();
        int y = k_diff;
        for(int i = 0;i<feddor.length();i++) if(feddor[i]!=next_player[i] ) y--;
        if(y>=0) ans+=1;
        s.push(feddor);
    }
    cout<<ans;
}