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
void file();
/*----------------------------------------------------------------------------------------------------------------------------------------*/


void solve()
{
    int n; cin >> n;
    string num;
    for(int i = 1 ; i <=n ;i++){
        string temp = to_string(i);
        num.append(temp);
    }
    int digit[10] = {0};
    for(int i = 0 ; i < num.length() ; i++){
        digit[num[i]-'0']++;
    }
    for(int i = 0 ; i < 9 ; i++){
        cout << digit[i] << ' ';
    }
    cout << digit[9];
}


int main()
{
    file();
    int n; cin >> n;
    while(n--){
        //fast;
        //case;
        solve();
        nl;
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
