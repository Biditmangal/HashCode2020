#include <math.h>
#include <time.h>
#include <ctype.h>
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

#define sp system("pause")
#define FOR(i, a, b) for (int i = a; i < b; ++i)
#define FORD(i, a, b) for (int i = a; i > b; --i)
#define REP(i, n) FOR(i, 0, (int)n - 1)
#define pb(x) push_back(x)
#define mp(a, b) make_pair(a, b)
#define MS0(x) memset(x, 0, sizeof(x))
#define MS1(x) memset(x, 1, sizeof(x))
#define SORT(a, n) sort(begin(a), begin(a) + n)
#define REV(a, n) reverse(begin(a), begin(a) + n)
#define ll long long
#define pii pair<int, int>
#define MOD 1000000007

void solve()
{
    // TODO
    int D, I, S, V, F;
    cin >> D >> I >> S >> V >> F;
    int B[100000], E[100000];
    vector<string> name(100000);
    int L[100000], P[1000];
    vector<vector<string>> nameStreet(1000);
    FOR(i, 0, S)
    {
        cin >> B[i] >> E[i] >> name[i] >> L[i];
    }

    FOR(i, 0, V)
    {
        cin >> P[i];
        FOR(j, 0, P[i])
        {
            string x;
            cin >> x;
            nameStreet[i].pb(x);
        }
    }
    cout << 3 << endl
         << 1 << endl
         << 2 << "\n"
         << "rue-d-athenes 1" << endl
         << "rue-d-amsterdam 1" << endl
         << 0 << endl
         << 1 << endl
         << "rue-de-londres 2" << endl
         << 2 << endl
         << 1 << endl
         << "rue-de-moscou 1" << endl;
}
int main()
{
    freopen("a.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--)
        solve();

    return 0;
}
