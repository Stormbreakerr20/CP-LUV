
#define all(x) (x).begin(), (x).end()
#define make_unique(x) sort(all((x))); (x).resize(unique(all((x))) - (x).begin())

// use sort(all(a));

// inp
inline int nxt() {
	int x;
	cin >> x;
	return x;
}

#define LIMIT 1000000
long long i, j;
long long prime_flag[LIMIT];
void calculate_prime_flag(){
    prime_flag[0] = prime_flag[1] = 1;
    for(i=2;i<LIMIT;i++){
        if (prime_flag[i]==0){
            for(j=i*i;j<LIMIT;j+=i){
                prime_flag[j] = 1;
            }
        }
    }
}

int check_perfect_square(long long n){
    double sqrt_n = sqrt(n);
    if(sqrt_n == int(sqrt_n)){
        return 1;
    }
    else{
        return 0;
    }
}

//////////////////////////////////////////////////////////////////// moduli : 450B:
int pow(int a,int b,long long m){
    if(b==0) return 1;
    if(b==1) return a;

    if(b&1) return ((a%m)*(pow(((a%m)*(a%m))%m,b/2,m)%m))%m;
    else return pow(((a%m)*(a%m))%m,b/2,m)%m;
}


ll GCD(ll a, ll b)
{
    if (a == 0)
        return b;
    return GCD(b % a, a);
}

void Merge(vector<ll> &diff, ll s,ll e,ll &ans){

    ll mid = s + (e-s)/2;
    vector<ll> a,b;
    for(ll i = s; i<=mid;i++) a.push_back(diff[i]);
    for(ll i = mid+1; i<=e;i++) b.push_back(diff[i]);
    
    ll ap = 0,bp = 0;

    ll i=a.size()-1,j = 0;
    while(j<b.size()){
        while(i>=0 && a[i] > -b[j]) i--;
        ans+= a.size() - 1 - i;
        j++;
    }

    while(ap < a.size() && bp < b.size()){
        if(a[ap]<b[bp]) diff[s++] = a[ap++];
        else diff[s++] = b[bp++];
    }

    while(ap< a.size()) diff[s++] = a[ap++];
    while(bp< b.size()) diff[s++] = b[bp++];



}
void MergeSort_Pairs_Comparison(vector<ll> &diff, ll s,ll e,ll &ans){
    if(s>=e) return;
    ll mid = s + (e-s)/2;
    MergeSort_Pairs_Comparison(diff,s,mid,ans);
    MergeSort_Pairs_Comparison(diff,mid+1,e,ans);

    Merge(diff,s,e,ans);
}




// Commited by Nani
































