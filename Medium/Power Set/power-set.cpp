//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
		vector<string> ans;
        void f(string s, int idx, string temp){
            if(idx==s.size()){
                if(temp.size()!=0)
                ans.push_back(temp);
                return;
            }
            f(s,idx+1, temp+s[idx]);
            f(s, idx+1, temp);
        }
        vector<string> AllPossibleStrings(string s){
            // Code here
            f(s,0,"");
            sort(ans.begin(), ans.end());
            return ans;
        }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends