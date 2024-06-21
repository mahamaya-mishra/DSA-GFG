//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<int> minAnd2ndMin(int a[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) 
            cin >> a[i];

        vector<int> ans = minAnd2ndMin(a, n);
        if (ans[0] == -1)
            cout << -1 << endl;
        else 
            cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}
// } Driver Code Ends


vector<int> minAnd2ndMin(int a[], int n) {
    int am= INT_MAX;
    int b = INT_MAX;
    for(int i=0; i<n; i++){
        if(a[i]<am){
            am=a[i];
        }
    }
       for(int i=0; i<n; i++){
        if(a[i]<b && a[i]>am){
            b=a[i];
        }
    }
    vector  <int> v;
       v={am,b};
    if(am== INT_MAX || b == INT_MAX){
        v= {-1,-1};
    }
  
     return v;
}