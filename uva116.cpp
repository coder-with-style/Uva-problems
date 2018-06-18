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

int A[5*3600+1];
void _() {
    bool brk=false;
    while (1){
        memset(A,0, sizeof(int)*(5*3600+1));
        int mi=INF,nums=0;
        int t;
        while (cin >> t){
            if(t==0){
                if(brk)return;
                else {brk=true;
                    break;}
            }
            else{brk=false;}
            nums++;
            for (int i = 0; i < (5*3600)+1; i+=2*t) {
                for (int j = i; j < i+t-5; ++j) {
                    if(j<5*3600+1)A[j]++;
                }
            }
            mi=min(mi,t);
        }
        int tm=find(A+2*mi,A+5*3600+1,nums)-A;
        if(tm==5*3600+1)cout <<"Signals fail to synchronise in 5 hours" <<"\n";
        else{
            cout << setfill('0') << setw(2)<< (tm/3600);
            cout << ":";
            cout << setfill('0') << setw(2)<< (tm%3600/60);
            cout << ":";
            cout << setfill('0') << setw(2)<< (tm%3600%60) <<"\n";
        }

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






