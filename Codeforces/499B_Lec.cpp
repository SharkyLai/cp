#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
#include <array>
#include <algorithm>
#include <utility>
#include <map>
#include <queue>
#include <set>
#include <cmath>
#include <cstdio>
#include <cstring>
using namespace std;
typedef long long ll;
map <string,string> mp;
int main(void)
{
    int n,m;
    cin >> n >>m;
    for(int i=1;i<=m;i++)
    {
        string s1,s2;
        cin >>s1 >> s2;
        mp[s1]=s2;
    }
    for(int i=1;i<=n;i++)
    {
        string s ;
        cin  >>s;
        if(s.size() > mp[s].size())
            cout << mp[s] <<" ";
        else
            cout << s <<" ";
    }
}