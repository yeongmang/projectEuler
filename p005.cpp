/*** Author : Yeongmang ***/
#include<bits/stdc++.h>
using namespace std;

#define loop(i, a, b) for (LL i = (a), _b = (b); i <= _b; ++i)
#define loopd(i, b, a) for (LL i = (b), _a = (a); i >= _a; --i)
#define itype(c) __typeof((c).begin())
#define loopv(i, v) for (itype(v) i = (v).begin(); i != (v).end(); ++i)
#define all(x) (x).begin(),(x).end()
#define sortv(x) sort(all(x))

#define sz size
#define pb push_back
#define mp make_pair
#define X first
#define Y second

typedef long long LL;
typedef unsigned long long LLU;
typedef long double LD;
typedef vector<long> VL;
typedef vector<LL> VLL;
typedef vector<VL> VVL;
typedef vector<VLL> VVLL;
typedef vector<string> VS;

#define PI acos(-1.)
#define MOD (1000000007LL)
#define SIZE (100009LL)

int main() {
    int t;
    ios_base::sync_with_stdio(false);
    int dp[21] = {0};
    loop (i, 2, 20) {
        int r = sqrt(i), num = i;
        loop (j, 2, r) {
            int count = 0;
            while (num % j == 0) {
                count++;
                num /= j;
            }
            dp[j] = max(dp[j], count);
        }
        if (num > 1) {
            dp[num] = max(dp[num], 1);
        }
    }
    int res = 1;
    loop (i, 1, 20) {
        while (dp[i]) {
            res *= i;
            dp[i]--;
        }
    }
    cout << res << endl;
    return 0;
}

