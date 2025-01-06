#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r;
    cin>>r;

    // left centre be at 0,0
    // square ==> -N ==> N

    for(int i = -r;i<=r;i++)
    {
        for(int j = -r;j<=r;j++)
        {
            if(i * i + j * j < r * r) cout<<"*";
            else cout<<" ";
            cout<<" ";  
        }
        cout<<endl;
    }
}