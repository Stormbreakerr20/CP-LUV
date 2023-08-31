#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;

    if(s.find('4') == -1 && s.find('7') == -1) {
        cout<<"-1";
        return 0;
    }

    int cfour = 0;
    int cseven = 0;

    for(auto i:s){
        if(i=='4') cfour++;
        else if(i == '7') cseven++;
    }

    cout<<((cfour>cseven)?'4':(cfour == cseven)?'4':'7');
}