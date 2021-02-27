// unsolved
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long T = 0;
    cin >> T; cin.ignore();

    vector<int> result;

    while( T > 0 )
    {
        vector< long long > A;
        long long K;

        for (int i = 0; i < 10; i++)
        {
            long long temp; cin >> temp; cin.ignore();
            A.push_back(temp);
        }

        cin >> K; cin.ignore();
 
        for (int i = 9; i > -1; i--)
        {
            if ( A.at(i) < K)
            {
                int temp = A[i];
                A[i] = 0;
                K = K - temp;
            }
            else
            {
                A[i] = A[i] - K;
                K = 0;
            }
            if ( K == 0 )
                break;            
        }

        int ans = -1;

        for (int i = 9; i > -1; i--)
        {
            if ( A.at(i) != 0 )
            {
                ans = i + 1;
                break;
            }
            
        }
        
        result.push_back(ans);

        T--;
    }

    T = result.size();

    for (long long i = 0; i < T; i++)
    {
        cout << result.at(i) << "\n";
    }
}