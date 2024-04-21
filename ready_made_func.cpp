#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define all(x) (x).begin(), (x).end()
#define make_unique(x) \
    sort(all((x)));    \
    (x).resize(unique(all((x))) - (x).begin())
#define f(i, n) for (ll i = 0; i < (n); i++)
#define fr(i, n) for (ll i = (n)-1; i >= 0; i--)
#define fex(i, s, n) for (ll i = s; i < (n); i++)
#define fexr(i, s, n) for (ll i = (n)-1; i >= s; i--)
const int N = 2e5 + 5;

void Euler_Sieve_PrimeFactors_count(ll n, unordered_map<ll, ll> &m)
{
    for (int j = 2; j <= sqrt(n); j++)
    {
        while (n % j == 0)
        {
            n /= j;
            m[j]++;
        }
    }
    if (n > 1)
        m[n]++;
}
vector<int> prime_factors(int n)
{
    vector<int> factors;
    for (int i = 2; i * i <= n; ++i)
    {
        while (n % i == 0)
        {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n > 1)
    {
        factors.push_back(n);
    }
    return factors;
}

vector<int> common_prime_factors(int a, int b)
{
    vector<int> factors_a = prime_factors(a);
    vector<int> factors_b = prime_factors(b);

    unordered_map<int, int> freq_a, freq_b;

    for (int factor : factors_a)
    {
        freq_a[factor]++;
    }

    for (int factor : factors_b)
    {
        freq_b[factor]++;
    }

    vector<int> common_factors;
    for (auto &entry : freq_a)
    {
        if (freq_b.count(entry.first) > 0)
        {
            common_factors.push_back(entry.first);
        }
    }

    return common_factors;
}

int distinct_k_values(int a, int b, int l)
{
    vector<int> common_factors = common_prime_factors(a, b);
    vector<int> max_powers;

    for (int factor : common_factors)
    {
        int max_power = 0;
        while (l % int(pow(factor, max_power + 1)) == 0)
        {
            max_power++;
        }
        max_powers.push_back(max_power);
    }

    int result = 0;
    for (int i = 1; i < (1 << max_powers.size()); ++i)
    {
        int lcm = 1;
        int count_bits = __builtin_popcount(i);
        for (int j = 0; j < max_powers.size(); ++j)
        {
            if ((i >> j) & 1)
            {
                lcm *= int(pow(common_factors[j], max_powers[j]));
            }
        }
        if (count_bits % 2 == 1)
        {
            result += l / lcm;
        }
    }

    return result;
}
#define LIMIT 1000000
long long i, j;
long long prime_flag[LIMIT];
void calculate_prime_flag()
{
    prime_flag[0] = prime_flag[1] = 1;
    for (i = 2; i < LIMIT; i++)
    {
        if (prime_flag[i] == 0)
        {
            for (j = i * i; j < LIMIT; j += i)
            {
                prime_flag[j] = 1;
            }
        }
    }
}
int uniquePaths(int m, int n) {
	// Write your code here.
	vector<vector<int>> dp(m,vector<int> (n,-1));
	for(int i = 0;i<m;i++){
		for(int j = 0;j<n;j++){
			if(i == 0 && j == 0) dp[i][j] = 1;
			else{
				int up = 0,left = 0;
				if(i > 0) left = dp[i-1][j];
				if(j > 0) up = dp[i][j-1];

				dp[i][j] = up + left;
			}
		}
	}
	return dp[m-1][n-1];
}
void bfs(unordered_map<int,vector<int>> &g,ll i,vector<bool> &visited){
    queue<ll> q;
    q.push(i);

    while(!q.empty()){
        ll node = q.front();
        q.pop();
        visited[node] = 1;
        for(auto k: g[node]){
            if(!visited[k]){
                q.push(k);
            }
        }
    }
}
double distance(pair<ll, ll> &a, pair<ll, ll> &b)
{
    return sqrt(pow(a.first - b.first, 2) + pow(a.second - b.second, 2));

    // To get upto 10 decimal places
    cout << setprecision(10);

    if (d(o, a) == d(o, b))
    {
        cout << max(min(d(a, p), d(b, p)), d(o, a));
    }
}

bool compare(pair<ll, ll> &a, pair<ll, ll> &b)
{
    if (a.second == b.second)
        return a.first > b.first;
    return a.second < b.second;
}

int check_perfect_square(long long n)
{
    double sqrt_n = sqrt(n);
    if (sqrt_n == int(sqrt_n))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

//////////////////////////////////////////////////////////////////// moduli : 450B:
int pow(int a, int b, long long m)
{
    if (b == 0)
        return 1;
    if (b == 1)
        return a;

    if (b & 1)
        return ((a % m) * (pow(((a % m) * (a % m)) % m, b / 2, m) % m)) % m;
    else
        return pow(((a % m) * (a % m)) % m, b / 2, m) % m;
}

ll GCD(ll a, ll b)
{
    if (a == 0)
        return b;
    return GCD(b % a, a);
}

void Merge(vector<ll> &diff, ll s, ll e, ll &ans)
{

    ll mid = s + (e - s) / 2;
    vector<ll> a, b;
    for (ll i = s; i <= mid; i++)
        a.push_back(diff[i]);
    for (ll i = mid + 1; i <= e; i++)
        b.push_back(diff[i]);

    ll ap = 0, bp = 0;

    ll i = a.size() - 1, j = 0;
    while (j < b.size())
    {
        while (i >= 0 && a[i] > -b[j])
            i--;
        ans += a.size() - 1 - i;
        j++;
    }

    while (ap < a.size() && bp < b.size())
    {
        if (a[ap] < b[bp])
            diff[s++] = a[ap++];
        else
            diff[s++] = b[bp++];
    }

    while (ap < a.size())
        diff[s++] = a[ap++];
    while (bp < b.size())
        diff[s++] = b[bp++];
}
void MergeSort_Pairs_Comparison(vector<ll> &diff, ll s, ll e, ll &ans)
{
    if (s >= e)
        return;
    ll mid = s + (e - s) / 2;
    MergeSort_Pairs_Comparison(diff, s, mid, ans);
    MergeSort_Pairs_Comparison(diff, mid + 1, e, ans);

    Merge(diff, s, e, ans);
}

pair<ll, ll> CountDivisors(ll n)
{

    ll count_even = 0, count_odd = -1; // as 1 we want to exclude

    for (ll i = 1; i <= sqrt(n); i++)
    {
        if (!(n % i) && n / i >= i)
        {
            ll div1 = i, div2 = n / i;

            if (div1 & 1)
                count_odd++;
            else
                count_even++;

            if (div2 & 1)
                count_odd++;
            else
                count_even++;
        }
    }

    ll total_div = count_even + count_odd;

    return {count_odd, count_even};
}

bool isprime(ll n)
{
    for (ll i = 2; i <= min(n, 50000); i++)
        if (!(n % i))
            return false;
    return true;
}

pair<ll, ll> PrimeFactorization(ll n)
{
    if (isprime(n))
        return {0, 0};

    ll count_even = 0, count_odd = 0;

    while (n % 2 == 0)
        count_even++, n /= 2;

    ll i = 3;

    while (n > 1 && i <= n)
    {
        while ((isprime(i)) && n % i == 0)
            count_odd++, n /= i;
        i += 2;
    }

    ll total_prime_div = count_even + count_odd;

    return {count_odd, count_even};
}

//  Thus, if you apply logical AND operation to n&(n−1) , the result will be zero only if n is a power of two.
// Note
// x&(x-1) = 0 means x can be written as 2^x means x has no odd divisors


//  GCD(a,b) = a*b/LCM(a,b)

// s.erase(0,1); // delete 1 element from index 0

// To get upto 10 decimal places
// cout << setprecision(10);


// (1<<4) == 2**x


// last = n - 1
// To go in cycle by v[last] steps toward left
            // last += n - v[last];
            // if(last >= n) last -= n;


// string(4,'a') ==> "aaaa"
// s.find("luv") != string::npos // if "luv" is present in s
// sort(v.rbegin(),v.rend()) reverse sort

// strings add
string add_string(string a, string b)
{
    ll s1 = a.size() - 1;
    ll e1 = 0;
    ll s2 = b.size() - 1;
    ll e2 = 0;

    while(a[e1] == '0') e1++;
    while(b[e2] == '0') e2++;

    ll carry = 0;
    string ans = "";

    while (s1 >= e1 && s2 >= e2)
    {
        ll dig = carry + (a[s1--] - '0') + (b[s2--] - '0');
        carry = dig / 10;
        dig = dig % 10;
        ans = to_string(dig) + ans;
    }
    while (s1 >= e1)
    {
        ll dig = carry + (a[s1--] - '0');
        carry = dig / 10;
        dig = dig % 10;

        ans = to_string(dig) + ans;
    }
    while (s2 >= e2)
    {
        ll dig = carry + (b[s2--] - '0');
        carry = dig / 10;
        dig = dig % 10;

        ans = to_string(dig) + ans;
    }

    if(carry) ans = to_string(carry) + ans;

    return ans;
}

ll Digit_SumUptoN_Helper(ll n, ll a[]) 
{ 
    if (n < 10) 
        return (n * (n + 1) / 2); 
     
    ll d = (ll)(log10(n)); 
    ll p = (ll)(ceil(pow(10, d))); 
    ll msd = n / p; 
     
    return (msd * a[d] + (msd * (msd - 1) / 2) * p + 
            msd * (1 + n % p) + 
            Digit_SumUptoN_Helper(n % p, a)); 
} 
// digit sum upto n
ll Digit_SumUptoN(ll n) 
{ 
    ll d = (ll)(log10(n));
 
    ll a[d + 1]; 
    a[0] = 0; a[1] = 45;
     
    for(ll i = 2; i <= d; i++) 
        a[i] = a[i - 1] * 10 + 45 * 
               (ll)(ceil(pow(10, i - 1))); 
 
    return Digit_SumUptoN_Helper(n, a); 
} 
//  to binary
long long toBin(ll n) {
    string r;
    while(n != 0) {
        r = (n%2 == 0? "0":"1") + r;
        n = n/2;
    }
    ll num = stoi(r)*1LL;
    return num;
}
// is binary
bool is_bin(ll n)
{
    while(n)
    {
        if(n%10 != 0 && n%10 != 1) return false;
        n = n/10;
    }

    return true;
}