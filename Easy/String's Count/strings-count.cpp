//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
long long int countStr(long long int n);

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        cout << countStr(n) << endl;
    }
return 0;
}
// } Driver Code Ends


long long int countStr(long long int n){
    //complete the function here
    long countA = 1, countB = n, countC = n;
        long countAB = n * (n - 1); // Strings with 'a' and 'b'
        long countAC = countAB / 2; // Strings with 'a' and 'c'
        long countBC = countAC * (n - 2); // Strings with 'b' and 'c'

        // Sum up all the counts
        long total = countA + countB + countC + countAB + countAC + countBC;
        
        return total;
}