#include <bits/stdc++.h>
using namespace std;

#define ll      long long
#define nl      cout << "\n";
#define pi      (2*acos(0))
#define case    cout << "Case #" << case_number << ": "; case_number++;
#define fast    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define MAX_INT 1000000007
#define YES     "Yes"
#define NO      "No"

int case_number = 1;
//knights move
int dr[] = {2, 2, -2, -2, 1, 1, -1, -1};
int dc[] = {1, -1, 1, -1, 2, -2, 2, -2};


void file();
/*----------------------------------------------------------------------------------------------------------------------------------------*/


void solve()
{
    int n; cin >> n;
    vector<pair<int,int>> speed;
    for(int i = 0 ; i < n ; i++){
        int a ,b;
        cin >> a>> b;
        speed.push_back({a, b});

    }
    //for(auto o: speed) cout << o.first << " " << o.second << endl;
    sort(speed.begin(), speed.end());
    //for(auto o: speed) cout << o.first << " " << o.second << endl;
    double ans = 0, spd;
    for(int i = 0 ; i <n ; i++){
        spd= 1.0* abs(speed[i].second - speed[i+1].second)/abs(speed[i].first - speed[i+1].first);
        ans = max(ans, spd);
    }
    cout << fixed << setprecision(2) << ans;

}


int main()
{
    file();
    int n; 
    //solve();
    //cin >> n; while(n--){solve();nl;}
    cin >> n; while(n--){case;solve();nl;} // Case 

    return 0;
}

void file()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r", stdin);
    freopen("out.txt" , "w", stdout);
    #endif
}
