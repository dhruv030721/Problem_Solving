#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int current_score=0,leading=0,max_lead=0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int player1,player2;
        cin >> player1 >> player2;
        int score_diff = player1 - player2;
        current_score += score_diff;
        if(abs(current_score) > max_lead)
        {
            max_lead = abs(current_score);
            if(current_score > 0)    
                leading = 1;
            else
                leading = 2;
            
        }
    }
    cout << leading << " " << max_lead << endl;
}