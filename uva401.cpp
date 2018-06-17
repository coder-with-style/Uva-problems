#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define tr(container, it) \
    for (auto it = container.begin(); it != container.end(); it++)
#define scontains(c, x) ((c).find(x) != (c).end())   //O(log n)
#define contains(c, x) (find((c).begin(),(c).end(),x) != (c).end()) //O(n)
#define ill(_x)  ll _x;scanf("%lld",&_x);
#define idb(_x)  double _x;scanf("%lf",&_x);
#define all(x) (x).begin(),(x).end()
#define pll pair<ll,ll>
#define mll map<ll,ll>
#define vll vector<ll>
#define sll set<ll>
#define vs vector<string>
#define in0(x, a, b)((x)>=a && (x)<=b    )
#define in1(x, a, b)((x)>a && (x)<b)
#define  rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
const double pi = 3.14159265358979323846;
const int INF = 0x3f3f3f3f;
const int X10=1024,X11=2048,X12=4096,X13=8196,X14=16392,X15=32786,X16=65536,X17=131072,X18=262144,X19=524288,X20=1048576;

map<char,char> mp={{'A','A'},{'E','3'},{'H','H'},{'I','I'},{'J','L'},{'L','J'},{'M','M'},{'O','O'},{'S','2'},
                   {'T','T'},{'U','U'},{'V','V'},{'W','W'},{'X','X'},{'Y','Y'},{'Z','5'},{'1','1'},{'2','S'},
                   {'3','E'},{'5','Z'},{'8','8'}};
bool is_mirror(string s){
    for (int i = 0; i < s.size(); ++i) {
        if(s[i]!=mp[s[s.size()-i-1]])return false;
    }
    return true;
}

bool is_palindrome(string s){
    for (int i = 0; i < s.size(); ++i) {
        if(s[i]!=s[s.size()-i-1])return false;
    }
    return true;
}
void _(){
    string s;
    while (cin >> s){
        if(is_mirror(s))cout << s << " -- is" <<(is_palindrome(s)? " a mirrored palindrome." :" a mirrored string.") <<"\n\n";
        else cout << s << " -- is" <<(is_palindrome(s)? " a regular palindrome." :" not a palindrome.") <<"\n\n";
    }

}


int main() {
#if __MINGW32__
    freopen("E:\\Workspace\\Desktop\\cpp\\IO\\Input.txt", "r", stdin);
    freopen("E:\\Workspace\\Desktop\\cpp\\IO\\Output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    _();
    return 0;

}






