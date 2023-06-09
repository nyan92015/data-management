#include <bits/stdc++.h>
using namespace std;

/* alias */
using ull = unsigned long long;
using ll = long long;
using vi = vector<int>;
using vl = vector<long>;
using vll = vector<long long>;
using vvi = vector<vi>;
using vvl = vector<vl>;
using vvll = vector<vll>;
using vs = vector<string>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using psi = pair<string, int>;
using pis = pair<int, string>;
using vpii = vector<pii>;
using vpll = vector<pll>;
using vpsi = vector<psi>;
using vpis = vector<pis>;

/* define short */
#define pb push_back
#define mp make_pair
#define all(obj) (obj).begin(), (obj).end()
#define printd(d, x) {cout << setprecision(d) << x << endl;}

/* REP macro */
#define reps(i, a, n) for (ll i = (a); i < (ll)(n); ++i)
#define rep(i, n) reps(i, 0, n)
#define rrep(i, n) reps(i, 1, n + 1)
#define repd(i,n) for(ll i=n-1;i>=0;i--)
#define rrepd(i,n) for(ll i=n;i>=1;i--)

/* debug */
#define debug(x) cerr << "\033[33m(line:" << LINE << ") " << #x << ": " << x << "\033[m" << endl;

// search_length: 走査するベクトル長の上限(先頭から何要素目までを検索対象とするか、1始まりで)
template <typename T> inline bool vector_finder(std::vector<T> vec, T element, unsigned int search_length) {
    auto itr = std::find(vec.begin(), vec.end(), element);
    size_t index = std::distance( vec.begin(), itr );
    if (index == vec.size() || index >= search_length) {return false;} else {return true;}
}
template <typename T> inline void print(const vector<T>& v, string s = " ")
    {rep(i, v.size()) cout << v[i] << (i != (ll)v.size() - 1 ? s : "\n");}
template <typename T, typename S> inline void print(const pair<T, S>& p)
    {cout << p.first << " " << p.second << endl;}
template <typename T> inline void print(const T& x) {cout << x << "\n";}
template <typename T, typename S> inline void print(const vector<pair<T, S>>& v)
    {for (auto&& p : v) print(p);}

int main() {

    string name;
    cout << "What is your name?" << endl;
    cout << ">";
    cin >> name;
    cout << "Hello, " << name << "!" << endl;

    srand(time(NULL)); /*乱数設定*/

    int daice1 = rand() % 6 + 1;
    int daice2 = rand() % 6 + 1;
    int total = daice1 + daice2;

    cout << "Die 1: " << daice1 << endl;
    cout << "Die 2: " << daice2 << endl;
    cout << "Total value: " << total << endl;
    cout << "You" << (total > 7 ? "won!" : "lost") << endl;
    return 0;
}
