#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    // cin >> T; cin.ignore();
    T = 1;

    vector<string> result; // will store a string of space seperated values for each test case
    
    while(T>0)
    {
        short n, h, x;
        priority_queue<short, vector<short>, greater<short> > t;

        cin >> n;
        cin >> h;
        cin >> x;

        for (short i = 0; i < n; i++)
        {
            short temp;
            cin >> temp;
            t.push(temp);
        }
        
        string out = "NO";
        for (short i = 0; i < n; i++)
        {
            if ( h <= x + t.top() )
            {
                out = "YES"; break;
            }
            t.pop();
        }

        result.push_back(out);
        
        T--;
    }
    
    for (int i = 0; i < result.size(); i++)
    {
        cout << result.at(i) << endl;
    }
    
    return 0;
}