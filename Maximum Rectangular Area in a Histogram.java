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
    // public static long[] ps(long[] nums) {
    //     Stack<Integer> st = new Stack<>();
    //     st.push(-1);
    //     long []ans = new long[nums.length];
    //     for(int i=0;i<=nums.length-1;i++){
            
    //         while(st.peek()!=-1 && nums[st.peek()]>=nums[i] ){
    //             st.pop();
    //         }
    //         ans[i]=st.peek();
    //         st.push(i);
    //     }
    //     return ans;
    // }
    // public static long[] ns(long[] nums) {
    //     Stack<Integer> st = new Stack<>();
    //     st.push(-1);
    //     long []ans = new long[nums.length];
    //     for(int i=nums.length-1;i>=0;i--){
            
    //         while(st.peek()!=-1 && nums[st.peek()]>=nums[i] ){
    //             st.pop();
    //         }
    //         ans[i]=st.peek();
    //         st.push(i);
    //     }
    //     return ans;
    // }
    // //Function to find largest rectangular area possible in a given histogram.
    // public static long getMaxArea(long hist[], long n) 
    // {
    //     // your code here
    //     long ans = Integer.MIN_VALUE;
    //     long []nxs = ns(hist);
    //     long []pxs = ps(hist);
    //     for(int i =0;i<n;i++){
    //         long l = hist[i];
    //         long b = nxs[i]-pxs[i]-1;
    //         if(b<0){
    //             b=n;
    //         }
    //         long area = l*b;
    //         if(area>ans)ans=area;
    //     }
    //     return ans;
    // }
       public static long getMaxArea(long hist[], long n) 

    {

        long maxArea = Integer.MIN_VALUE;

        long[] prevSmaller = prevSmaller(hist,n);

        long[] nextSmaller = nextSmaller(hist,n);

        

        for(int i=0; i<hist.length; i++){

            long currArea = (nextSmaller[i] - prevSmaller[i] - 1) * hist[i];   //calculating Area: breadth * height

            maxArea = Math.max(maxArea, currArea);

        }

        return maxArea;

    }

    

    static long[] prevSmaller(long[] hist, long n){     //storing previous smaller element index

        Stack<Integer> st = new Stack<>();

        st.push(-1);

        long prev[] = new long[hist.length];

        for(int i=0; i<hist.length; i++){

            while(st.peek()!=-1 && hist[st.peek()]>=hist[i]){

                st.pop();

            }

            prev[i] = st.peek();    

            st.push(i);    

        }

        return prev;

    }

    

    static long[] nextSmaller(long[] hist, long n){      //storing next smaller element index

        Stack<Integer> st = new Stack<>();

        st.push(hist.length);

        long[] next = new long[hist.length];

        for(int i=hist.length-1; i>=0; i--){

            while(st.peek()!=hist.length && hist[st.peek()]>=hist[i]){

                st.pop();

            }

            next[i] = st.peek();

            st.push(i);

        }

        return next;

    }

          
}



