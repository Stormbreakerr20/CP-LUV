
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





































