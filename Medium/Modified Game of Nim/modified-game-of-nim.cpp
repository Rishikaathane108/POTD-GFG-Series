//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int findWinner(int n, int A[]){
        // code here
        int xorA = 0;
        for(int i = 0; i < n; i++)xorA ^= A[i];
        
        if(xorA == 0)return 1;
        //if xorA is not zero then it means that there is atleast one different number
        //as both the players play optimally they will always try to keep that one diff number in the array
        //therefore the winner will be decided by that last left diff number as they play one after the other
        //the player who removes it will lose
        //odd no.of elements 1 will lose 
        //even no.of elements 2 will lose
        
        if(n % 2 != 0)return 2;
         
        else return 1;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i = 0;i < n;i++)
            cin>>A[i];
        
        Solution ob;
        cout<<ob.findWinner(n, A)<<"\n";
    }
    return 0;
}
// } Driver Code Ends