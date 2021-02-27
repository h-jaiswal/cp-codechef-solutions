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
        long long N, K;
        cin >> N; cin.ignore();
        cin >> K; cin.ignore();

        long long ans = 0;
        if ( N < K || K == 0)
        {
            ans = N;
        }
        else if ( N > K )
        {
            ans = N % K;
        }

        result.push_back( ans );
        T--;
    }

    T = result.size();

    for (long long i = 0; i < T; i++)
    {
        cout << result.at(i) << "\n";
    }
}