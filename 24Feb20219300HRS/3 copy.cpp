#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T; cin.ignore();

    vector<priority_queue< pair<int, int>> > result;
    
    while(T>0)
    {
        int N = 0;
        cin >> N; cin.ignore();
        string hours = "";

        priority_queue< pair<int, int> > patient;

        for (int i = 0; i < N; i++)
        {
            int temp;
            cin >> temp; 
            patient.push( make_pair( temp, i+1 ));
        }

        while( !patient.empty())
        {
            cout << patient.top().first << endl;
            patient.pop();
        }
        cin.ignore();
        
        // for (int i = 1; i <= N; i++)
        // {
        //     int count = 1;
        //     priority_queue< pair<int, int> > temp = patient;
        //     while( !patient.empty() )
        //     {
        //         if (patient.top().second == i)
        //         {
        //             hours += to_string(count) + " ";
        //         }
        //         patient.pop();
        //         count++;
        //     }
        //     patient = temp;
        // }
        
        T--;
        result.push_back(patient);
    }
    
    // for (int i = 0; i < result.size(); i++)
    // {
    //     if( !result.at(i).empty())
    //     {
    //         cout << result.at(i).top().first << endl;
    //         result.at(i).pop();
    //     }
    // }
    
    return 0;
}