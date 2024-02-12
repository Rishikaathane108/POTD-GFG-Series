//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    long long sequence(int n){
        // code here
        int m=1000000007;
        long long int total=1;
        long long int begin;
        for(long long int i=2;i<=n;i++)
        {
            long long int sum=1;
           if(i==2)  begin=2;
            long long int end=begin+i;
            for(long long int j =begin;j<end; j++)
            {
                sum=((sum)*j)%m;
            }
            total=(total+sum)%m;
            begin=end;
        }
        
        return total;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.sequence(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends