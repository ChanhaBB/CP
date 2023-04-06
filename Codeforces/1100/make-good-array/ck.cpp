#include <bits/stdc++.h>
using namespace std;
 
//Code Shortners
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
 
#define len(s) (int)s.size()
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define println(x) cout << x << '\n'
#define endl '\n'
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define REP(i,a,b) for (int i = a; i < b; i++);
 
//code
void solve() {
    int n;
    cin >> n;
    vector<pi> input;
    int idx = 1;
    while (n--) {
        int tmp;
        cin >> tmp;
        input.PB(MP(tmp, idx)); // (number, original index)
        idx++;
    }
    sort(input.begin(), input.end());
    n = len(input);
 
    cout << n-1 << endl;
    for (int i = 1; i < n; i++) {
        int x = input[i-1].first - input[i].first%input[i-1].first;
        cout << input[i].second << " " << x << endl;
        input[i].first += x;
    }
}
 
int main() 
{
    fast;
    ll t;
    cin >> t; // number of test cases
    while (t--) 
    {
        solve();
    }
    return 0;
}
