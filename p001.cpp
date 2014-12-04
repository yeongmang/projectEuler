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
    int nextMultiOf3, nextMultiOf5, num, sum = 0;
    nextMultiOf3 = 3;
    nextMultiOf5 = 5;
    while (true) {
        if (nextMultiOf3 == nextMultiOf5) {
            sum += nextMultiOf3;
            nextMultiOf3 += 3;
            nextMultiOf5 += 5;
        } else if (nextMultiOf3 < nextMultiOf5) {
            sum += nextMultiOf3;
            nextMultiOf3 += 3;
        } else {
            sum += nextMultiOf5;
            nextMultiOf5 += 5;
        }
        if (min(nextMultiOf3, nextMultiOf5) >= 1000) {
            break;
        }
    }
    cout << sum << endl;
    return 0;
}

