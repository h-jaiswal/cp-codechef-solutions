#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T; cin.ignore();

    vector<long long> result; // will store a string of space seperated values for each test case
    
    while(T>0)
    {
        long long C;
        cin >> C; cin.ignore();

        string c = bitset<30>(C).to_string();

        int d = c.length();
        for (int i = 1; i <= c.length(); i++)
        {
            if ( c.at(i) != '0' )
            {
                break;
            }
            d --;
        }
        d--;
        c = c.substr( c.length() - d, d);

        long long out = 0;
        for (long long  i = pow(2, d) - 2 ; i > 0; i--)
        {
            for (long long j = pow(2, d) - 2 ; j > 0; j--)
            {
                if( (i ^ j) == C )
                {
                    if( i * j > out )
                    out = i * j; 
                 }
             }
             
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