#include <bits/stdc++.h>
using namespace std;

#define ll      long long
#define nl      cout << "\n";
#define pi      (2*acos(0))
#define case    cout << "Case " << case_number << ": "; case_number++;
#define caseh    cout << "Case #" << case_number << ": "; case_number++;
#define fast    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define MAX_INT 100000007
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
    int x, y; cin >> x >> y;
    int cnt = 0;
    int m[64][64] = {0};
    string s; cin >> s;
    int n =0;
    m[x][y] = 1;
    int dir = 1;
    for(int i = 0 ; i < s.length() ; i++){
        if(s[i] == 'F'){
            if(dir == 1){
                y++;
                //if(m[x][y]) n++;
                m[x][y]++;
            }
            else if(dir == 2){
                x++;
                //if(m[x][y]) n++;
                m[x][y]++;
            }
            else if(dir == 3){
                y--;
                //if(m[x][y]) n++;
                m[x][y]++;
            }
            else if(dir == 4){
                x--;
                //if(m[x][y]) n++;
                m[x][y]++;
            }
        }
        else if(s[i] == 'R'){
            if(dir == 1) dir = 2;
            else if(dir == 2) dir =3;
            else if(dir == 3) dir =4;
            else dir = 1;
        }
        else if(s[i] == 'L'){
            if(dir == 1) dir = 4;
            else if(dir == 2) dir =1;
            else if(dir == 3) dir =2;
            else dir = 3;
        }
    }
    for(int i = 0 ; i < 64 ; i++){
    	for(int j = 0 ; j < 64 ; j++){
    		if(m[i][j] > 1) n++;
    	}
    }
    cout << x << ' '  << y << ' ' << n;

}


int main()
{
    //file();
    int n; 
    //solve();
    //cin >> n; while(n--){solve();nl;}
    //cin >> n; while(n--){case;solve();nl;} // Case 
    cin >> n; while(n--){caseh;solve();nl;} // Case (Case #1: )
    return 0;
}

void file()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r", stdin);
    freopen("out.txt" , "w", stdout);
    #endif
}
