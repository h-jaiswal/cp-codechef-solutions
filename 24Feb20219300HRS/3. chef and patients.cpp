/* Unsolved
4
5
2 3 5 3 4    
3
2 2 2        
6
2 10 3 3 2 10
4
8 9 8 9 

5 3 1 4 2
1 2 3
5 1 3 4 6 2
3 1 4 2
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T; cin.ignore();

    vector<string> result; // will store a string of space seperated values for each test case
    
    while(T>0)
    {
        int N = 0; 
        cin >> N; cin.ignore();

        priority_queue< pair<int, int> > patient;

        for (int i = 0; i < N; i++)
        {
            int temp;
            cin >> temp; 
            int id = i+1;
            patient.push( make_pair( temp, id ));
        }
        cin.ignore();
        
        int waitTime = 0;
        priority_queue< pair<int, int> > patientWaitTime;
        while( ! patient.empty())
        {
            waitTime = waitTime + 1;
            patientWaitTime.push( make_pair( patient.top().second, waitTime ));

            // cout << patient.top().first << " " << patient.top().second << endl;
            patient.pop();
        }
        
        string hours = "";
        while( ! patientWaitTime.empty() )
        {
            hours += to_string(patientWaitTime.top().second) + " ";

            // cout << patientWaitTime.top().first << " " << patientWaitTime.top().second << endl;

            patientWaitTime.pop();
        }
        
        T--;
        // reverse(hours.begin(), hours.end());
        // result.push_back(hours.substr(1, hours.length()-1));
        result.push_back(hours);
    }
    
    for (int i = 0; i < result.size(); i++)
    {
        cout << result.at(i) << endl;
    }
    
    return 0;
}