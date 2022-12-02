//{ Driver Code Starts
import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
    
    
	public static void main (String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int t = Integer.parseInt(br.readLine().trim());
		while(t-->0){
		    long n = Long.parseLong(br.readLine().trim());
		    String inputLine[] = br.readLine().trim().split(" ");
		    long[] arr = new long[(int)n];
		    for(int i=0; i<n; i++)arr[i]=Long.parseLong(inputLine[i]);
		    System.out.println(new Solution().getMaxArea(arr, n));
		}
	}
}




// } Driver Code Ends


class Solution
{
    public static long[] ps(long[] nums) {
        Stack<Integer> st = new Stack<>();
        st.push(-1);
        long []ans = new long[nums.length];
        for(int i=0;i<=nums.length-1;i++){
            
            while(st.peek()!=-1 && nums[st.peek()]>=nums[i] ){
                st.pop();
            }
            ans[i]=st.peek();
            st.push(i);
        }
        return ans;
    }
    public static long[] ns(long[] nums) {
        Stack<Integer> st = new Stack<>();
        st.push(-1);
        long []ans = new long[nums.length];
        for(int i=nums.length-1;i>=0;i--){
            
            while(st.peek()!=-1 && nums[st.peek()]>=nums[i] ){
                st.pop();
            }
            ans[i]=st.peek();
            st.push(i);
        }
        return ans;
    }
    //Function to find largest rectangular area possible in a given histogram.
    public static long getMaxArea(long hist[], long n) 
    {
        // your code here
        long ans = Integer.MIN_VALUE;
        long []nxs = ns(hist);
        long []pxs = ps(hist);
        for(int i =0;i<n;i++){
            long l = hist[i];
            if(nxs[i]<0){
                nxs[i]=n;
            }
            long b = nxs[i]-pxs[i]-1;
            
            long area = l*b;
            if(area>ans)ans=area;
        }
        return ans;
    }
}



