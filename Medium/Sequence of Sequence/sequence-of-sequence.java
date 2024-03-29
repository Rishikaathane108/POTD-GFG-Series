//{ Driver Code Starts
//Initial Template for Java
import java.io.*;
import java.util.*;

class GFG
{
    public static void main(String args[])throws IOException
    {
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while(t-- > 0)
        {
            String input_line[] = read.readLine().trim().split("\\s+");
            int m = Integer.parseInt(input_line[0]);
            int n = Integer.parseInt(input_line[1]);
            
            Solution ob = new Solution();
            System.out.println(ob.numberSequence(m, n));
        }
    }
}

// } Driver Code Ends


//User function Template for Java

class Solution{
    static int ans;
    public Solution(){
        this.ans = 0;
    }
    static int numberSequence(int m, int n)
    {
        // code here
        for(int i=1;i<=m;i++){
            findNumber(m,n,i,1);
        }
        return ans;
    }
    public static void findNumber(int m,int n,int num,int count){
        if(num>m){
            return;
        }
        if(count==n && num<=m){
            ans++;
            return;
        }
        
        int val = num*2;
        for(int i=val;i<=m;i++){
            findNumber(m,n,i,count+1);
        }
       
    }
}