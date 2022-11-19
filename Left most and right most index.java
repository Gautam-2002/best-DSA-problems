//{ Driver Code Starts
//Initial Template for Java

import java.util.*;
import java.lang.*;
import java.io.*;

class pair  {  
    long first, second;  
    public pair(long first, long second)  
    {  
        this.first = first;  
        this.second = second;  
    }  
}

class GFG {
	public static void main(String[] args) throws IOException
	{
	        BufferedReader br =
            new BufferedReader(new InputStreamReader(System.in));
        int t =
            Integer.parseInt(br.readLine().trim()); // Inputting the testcases
        while(t-->0)
        {
            long n = Long.parseLong(br.readLine().trim());
            long a[] = new long[(int)(n)];
            // long getAnswer[] = new long[(int)(n)];
            String inputLine[] = br.readLine().trim().split(" ");
            for (int i = 0; i < n; i++) {
                a[i] = Long.parseLong(inputLine[i]);
            }
            long k = Long.parseLong(br.readLine().trim());
            
            Solution obj = new Solution();
            pair ans = obj.indexes(a, k);
            if (ans.first == -1 && ans.second == -1)
                System.out.println(-1);
            else
                System.out.println(ans.first+" "+ans.second);
            
        }
	}
}


// } Driver Code Ends


//User function Template for Java

/*
class pair  {  
    long first, second;  
    public pair(long first, long second)  
    {  
        this.first = first;  
        this.second = second;  
    }  
}
*/

class Solution {
    public static long first(long []arr,long k) {
        int s = 0,e = arr.length-1; 
        int mid = s+(e-s)/2;
        int ans = -1;
        while (s<=e) {
            if(arr[mid]==k){
                ans = mid;
                e=mid-1;  
            }
            else if(arr[mid]<k){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid = s+(e-s)/2;
        }    
        return ans;
    }
    public static long last(long []arr,long k) {
        int s = 0,e = arr.length-1; 
        int mid = s+(e-s)/2;
        int ans = -1;
        while (s<=e) {
            if(arr[mid]==k){
                ans = mid;
                s=mid+1;  
            }
            else if(arr[mid]<k){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid = s+(e-s)/2;
        }    
        return ans;
    }
    
    public pair indexes(long v[], long x)
    {
        // Your code goes here
        pair ans = new pair(first(v,x),last(v,x));
        return ans;
    }
}