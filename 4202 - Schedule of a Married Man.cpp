#include <bits/stdc++.h>
using namespace std;

#define ll      long long
#define nl      cout << "\n";
#define pi      (2*acos(0))
#define case    cout << "Case " << case_number << ": "; case_number++;
#define fast    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define MAX_INT 1000002
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
    int h1, m1, h2, m2;
    int hm1, hm2, mm1, mm2;
    char c;
    cin >> h1 >>  c >> m1 >> h2 >> c >> m2;
    cin >> hm1 >>  c >> mm1 >> hm2 >> c >> mm2; 
    
     h1 = h1*60 +m1;
     h2 = h2*60 +m2;
     
     hm1 = hm1*60 +mm1;
     hm2 = hm2*60 +mm2;

     if(h1 >hm2 || h2 < hm1) cout << "Hits Meeting";
     else cout << "Mrs Meeting";
     nl;
}


int main()
{
    file();
    int n; 
    cin >> n; while(n--){
        case;
        solve();
    }

    return 0;
}

void file()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r", stdin);
    freopen("out.txt" , "w", stdout);
    #endif
}
