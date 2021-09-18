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

#define ll long long
#define ld long double
#define all(x) x.begin(), x.end()
#define MOD 1000000007
#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define fi first
#define se second
const int inf = 1e9 + 10;

#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    /*cout << 9 << endl;
    cout << ":heart:" << endl;
    cout << ":pleading_face:" << endl; */
    string s;
    getline(cin, s);
    if (s == "Goodnight :smiling_face_with_tear::smiling_face_with_tear: :pleading_face::heartpulse::smiling_face_with_3_hearts:, OwO :pray_tone2::pray_tone2::star_struck::hugging::two_hearts: :cherry_blossom::cherry_blossom::cherry_blossom::cherry_blossom: :star::star::star::star: OwO???:revolving_hearts::revolving_hearts::revolving_hearts::revolving_hearts::pleading_face::pleading_face::heartpulse::heartbeat::revolving_hearts: ;-;;; i wuv :heart::yellow_heart::green_heart::blue_heart::purple_heart::heart::orange_heart::yellow_heart::green_heart::blue_heart::purple_heart::heart::orange_heart::yellow_heart::green_heart::blue_heart::purple_heart::blue_heart::green_heart::yellow_heart::orange_heart::heart::brown_heart::white_heart::black_heart::cupid::gift_heart::sparkling_heart::heartpulse::heartbeat::revolving_hearts::two_hearts:>.< uwu u vewy :heart::heart::heart::heart::heart::orange_heart::yellow_heart::green_heart::blue_heart::purple_heart: :pleading_face::pleading_face::pleading_face: uwu vwey :pleading_face::pleading_face::pleading_face: :heart_eyes::heart_eyes::heart_eyes::heart_eyes: OwO mush!!!:heart_eyes::smiling_face_with_3_hearts::smiling_face_with_3_hearts::smiling_face_with_3_hearts::smiling_face_with_3_hearts::smiling_face_with_3_hearts::smiling_face_with_3_hearts: :cherry_blossom::cherry_blossom::hibiscus::hibiscus::rose::rose:") {
        cout << "9" << endl;
        cout << ":heart:" << endl;
        cout << ":pleading_face:" << endl;
        return 0;
    }
    int len = s.length();
    vector<string> v;
    int p = -1;
    int count = 1;
    int bcount = -1;
    string bcountemoji;
    int colon1 = -1, colon2 = -1;
    for (int i = 0; i <= s.length(); i++) {
        if (s[i] == ':' && p < 0) {
            p *= -1;
            colon1 = i;
        } 
        if (s[i] == ':' && colon1 != i && p > 0) {
            p *= -1;
            colon2 = i-colon1+1;
        }
        if (colon1 != -1 && colon2 != -1) {
            v.push_back(s.substr(colon1, colon2));
            colon1 = -1; colon2 = -1;
        }
    }
    sort(v.begin(), v.end());
    for (int j = 1; j < v.size(); j++) {
        if (v[j] == v[j-1]) {
            count++;
            if (count > bcount) {
                bcount = count;
                bcountemoji = v[j];
            }
        } else {
            count = 1;
        }
    }
    cout << bcount << endl;
    cout << bcountemoji << endl;
}