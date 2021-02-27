// unsolved
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T; cin.ignore();

    vector<vector<int>> result;
    
    while(T>0)
    {
        int N = 0, K = 0;
        cin >> N; cin.ignore();
        cin >> K; cin.ignore();

        vector<int> question;
        for (int j = 0; j < K; j++)
        {
            int temp;
            cin >> temp; cin.ignore();
            question.push_back(temp);
        }

        vector<int> scores;
        for (int i = 0; i < N; i++)
        {
            string attempts = "";
            getline(cin, attempts);

            int score = 0;
            for (int j = 0; j < K; j++)
            {
                if(attempts.at(j) == '1' ? true : false)
                {
                    score += question.at(j);
                }
            }
            scores.push_back(score);
        }
         
        //
        T--;
        result.push_back(scores);
    }
    
    for (int i = 0; i < result.size(); i++)
    {
        for( int j = 0; j < result.at(i).size(); j++)
        {
            cout << result.at(i).at(j) << endl;
        }
    }
    
    return 0;
}