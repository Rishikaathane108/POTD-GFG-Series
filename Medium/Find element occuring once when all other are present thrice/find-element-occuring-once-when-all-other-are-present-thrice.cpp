//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int singleElement(int arr[] ,int N) {
        // code here
        int one = 0;
        int two = 0;
        int bit;
        for(int i = 0;i<N;i++){
            two = two | (one & arr[i]);
            one = one ^ arr[i];
            bit = ~(one & two);
            one = one & bit;
            two = two & bit;
        }
        return one;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.singleElement(arr,N);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends