#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <set>
#include <climits>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()
inline ll nxt()
{
    ll x;
    cin >> x;
    return x;
}
void smin(ll dig,ll sum,string& ans){
    if(dig == 1){
        ans+= (sum + '0');
        return;
    }
    if(sum>(dig-1)*9){
        ans += ((sum-(dig-1)*9) + '0');
        for(ll i = 1;i<dig;i++) ans+= (9+'0');
        return;
    }
    else{
        ans+=(ans.length() ? '0':1+'0');
        smin(dig-1,sum-(ans[ans.length()-1] - '0'),ans);
    }
}
int main()
{
    ll dig = nxt();
    ll sum = nxt();

    if((dig>1 && sum==0) || sum> 9*dig){
        cout<<-1<<" "<<-1;
        return 0;
    }
    if(dig == 1 && !sum){
        cout<<"0 0";
        return 0;
    }

    string mins ="";
    smin(dig,sum,mins);
    cout<<mins<<" ";

    string maxs="";
    if(sum<10){
        maxs+=(sum + '0');
        for(int i=1;i<dig;i++) maxs+='0';
    }
    else{
        ll nines = sum/9;
        ll rest = sum - nines*9;
        while(nines--) maxs+= '9';
        if(rest) maxs+= (rest + '0');
        for(int i = maxs.length();i<dig;i++) maxs+= '0';
    }

    cout<<maxs;
}