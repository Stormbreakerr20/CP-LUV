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
// use sort(all(a));

// inp
inline int nxt()
{
    int x;
    cin >> x;
    return x;
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
// x%(x-1) = 0 means x can be written as 2^x means x has no odd divisors

//  GCD(a,b) = a*b/LCM(a,b)

// s.erase(0,1); // delete 1 element from index 0