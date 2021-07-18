#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T; cin.ignore();

    vector<int> result; // will store a string of space seperated values for each test case
    
    while(T>0)
    {
    //    int N;
    //    cin >> N; cin.ignore();

       string S;
       getline(cin, S);
       S = S + "0";
       int count = 0;
       for (int i = 0; i < S.length(); i++)
       {
           try
           {
               while( S.at(i) == '0')
                {
                    i++;
                }
                count++;
                while( S.at(i) == '1')
                {
                    i++;
                }
           }
           catch(const std::exception& e)
           {
               ;
           }
       }
       
        result.push_back(count);
        T--;
    }
    
    for (int i = 0; i < result.size(); i++)
    {
        cout << result.at(i) << endl;
    }
    
    return 0;
}