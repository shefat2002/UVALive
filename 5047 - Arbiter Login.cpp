#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <set>
#include <map>
#include <vector>
#include <string>
#include <cmath>
#include <cstring>
#include <queue>
#include <stack>
#include <algorithm>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cctype>
#include <limits>
using namespace std;
#define ll      long long
#define nl      cout << "\n";
#define pi      (2*acos(0))
#define case    cout << "Case " << case_number << ": "; case_number++;
#define caseh    cout << "Case #" << case_number << ": "; case_number++;
#define fast    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define MAX_INT 1000000007
#define YES     cout << "Yes"
#define NO      cout << "No"

int case_number = 1;
//knights move
int dr[] = {2, 2, -2, -2, 1, 1, -1, -1};
int dc[] = {1, -1, 1, -1, 2, -2, 2, -2};


void file();
/*----------------------------------------------------------------------------------------------------------------------------------------*/


void solve()
{
    int n;cin >>n;
    while(n--){
        string s1,s2;
        cin >> s1 >> s2;
        case;

        if(s1==s2) cout << "Login successful.";
        else{
            cout << "Wrong password.";
            string ss1 = s1, sn;
            for(int i = 0 ; i < ss1.size(); i++){
                if(isupper(ss1[i])) ss1[i] = tolower(ss1[i]);
                else if(islower(ss1[i]))ss1[i] = toupper(ss1[i]);
            }
            if(ss1 == s2)cout << " Please, check your caps lock key.";
            for(int i = 0 ; i < s1.size(); i++){
                if(!isdigit(s1[i])) sn+=s1[i]; 
            }
            if(sn ==s2) cout << " Please, check your num lock key.";
            for(int i = 0 ; i < sn.size(); i++){
                if(isupper(sn[i])) sn[i] = tolower(sn[i]);
                else if(islower(sn[i]))sn[i] = toupper(sn[i]);
            }
            if(sn == s2 && s1.size() != s2.size()) cout << " Please, check your caps lock and num lock keys.";

        }
        nl;

    }
}


int main()
{
    file();
    int n; 
    solve();
    //cin >> n; while(n--){solve();nl;}
    //cin >> n; while(n--){case;nl;solve();nl;} // Case 
    //cin >> n; while(n--){caseh;solve();nl;} // Case (Case #1: )
    return 0;
}

void file()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r", stdin);
    freopen("out.txt" , "w", stdout);
    #endif
}
