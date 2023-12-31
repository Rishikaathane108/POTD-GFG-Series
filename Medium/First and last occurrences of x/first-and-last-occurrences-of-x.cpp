//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    int searchFirst(int arr[],int start,int end,int x) {
        int ans = -1;
        while(start <= end) {
            int mid = start + (end-start)/2;
            if(arr[mid] == x) {
                ans = mid;
                end = mid-1;
            } else if(arr[mid] < x) {
                start = mid + 1;
            } else {
                end = mid-1;
            }
        }
        return ans;
    }
 
    int searchLast(int arr[],int start,int end,int x) {
        int ans = -1;
        while(start <= end) {
            int mid = start + (end-start)/2;
            if(arr[mid] == x) {
                ans = mid;
                start = mid+1;
            } else if(arr[mid] < x) {
                start = mid + 1;
            } else {
                end = mid-1;
            }
        }
        return ans;
    }
    vector<int> find(int arr[], int n , int x )
    {
        // code here
         vector<int>ans;
        int first = searchFirst(arr,0,n-1,x);
        int last = searchLast(arr,0,n-1,x);
 
        ans.push_back(first);
        ans.push_back(last);
 
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends