// solved
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T; cin.ignore();

    vector<string> result;

    while(T>0)
    {
        long long M;
        cin >> M; cin.ignore();

        long long H;
        cin >> H; cin.ignore();

        long long BMI = M / (H*H);

        string category = "";
        if( BMI <= 18)
        {
            category = "1";
        } else if( BMI <= 24)
        {
            category = "2";
        } else if( BMI <= 29)
        {
            category = "3";
        } else if( BMI >= 30)
        {
            category = "4";
        }

        //
        T--;
        result.push_back(category);
    }
    
    for (int i = 0; i < result.size(); i++)
    {
        cout << result.at(i) << "\n";
    }
    
    return 0;
}