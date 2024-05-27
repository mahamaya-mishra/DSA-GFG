//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    static bool comp(pair<pair<int, int>, pair<int, int>> a, pair<pair<int, int>, pair<int, int>> b){
        if(a.first.first< b.first.first){
            return true;
        }else if (a.first.first> b.first.first){
            return false;
        } else if(a.first.first== b.first.first){
          return a.first.second <  b.first.second;
      }
    }
    int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<pair<int, int>, pair<int, int>>> ans;
        for(int i=0; i<n; i++){
            ans.push_back({{end[i], i}, {start[i], i}});
        }
        sort(ans.begin(), ans.end(), comp);
        int etym =ans[0].first.first;
        int c=1;
for(int i=0; i<n; i++){
    
          if(ans[i].second.first>etym){
                c++;
        etym=ans[i].first.first;
}
}  
return c;
        }



   
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends