//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
long max(long a, long b) {
        return (a >= b)? a: b;
}
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        int i, front;
        long currSum;
        long maxSum;
        front = 0;
        currSum = maxSum = 0L;
        for(i = 0; i < N; i++) {
                if(i > K - 1) {
                        currSum -= Arr[front];
                        front++;
                }
                currSum = max(0, currSum + Arr[i]);
                maxSum = max(maxSum, currSum);
        }
        return maxSum;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends