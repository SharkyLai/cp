#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <map>
#include <cmath>
#include <algorithm>
typedef long long int ll;
#define f first
#define s second
#define vi vector<int>
#define ld long double
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define floop(count,a, n) for(int count{a}; count < n; ++count)
#define tr(c, it) for(auto it{c.begin()}; it != c.end(); ++it)
#define lb lower_bound
#define ub upper_bound
#define bs binary_search
#define newl '\n'
 
 
 
using namespace std;
 
const int MOD = 1e9+7;
const ld PI = acos(-1);
const ld EPS = 1e-9;
const ll INF = 1e18;
 
    
int main(){
 
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
        #ifndef ONLINE_JUDGE       
        freopen("input.txt", "r", stdin);                                     
        freopen("output.txt", "w", stdout);                       
        #endif    
    int cas;cin>>cas;
        while(cas--){
            int n, a;
            cin>>n;
            vi v1, v2;
            floop(i, 0, n)
            {
                cin>>a;
                v1.pb(a);
            }
            floop(i, 0, n)
            {
                cin>>a;
                v2.pb(a);
            }
            sort(v1.begin(), v1.end());
            sort(v2.begin(), v2.end());
            int dif = (n/4);
            int dif1 = dif;
           // int s1 = accumulate(v1.begin() + dif, v1.end(), 0);
           // int s2 = accumulate(v2.begin() + dif, v2.end(), 0);
            int s1 = 0;
            int s2 = 0;
            if(s1 >= s2)
            {
                cout<<"0\n";
                continue;
            }
            int r = 1;
            while(1)
            {
                if(dif1 != ((n + r)/4))
                {
                    s1 += 100;
                    dif1++;
                    s1 -= v1[dif1 - 1];
                    if(s1 >= s2)
                    {
                        cout<<r<<"\n";
                        break;
                    }
                    r++;
                    continue;
                }
                if(dif > 0)
                {
                    dif--;
                    s2+=v2[dif];
                    s1+=100;
                    if(s1 >= s2)
                    {
                        cout<<r<<"\n";
                        break;
                    }
                }
                else
                {
                    s1 += 100;
                    if(s1 >= s2)
                    {
                        cout<<r<<"\n";
                        break;
                    }
                }
                r++;
            }
        }
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
 
    return 0; 
}