class Solution {
public:
int max_arr(vector<int>& arr){
    int mx=INT_MIN;
    int n= arr.size();
    for(int i=0;i<n;i++){
         mx=max(mx,arr[i]);

    }
    return mx;
}

int sum_of_d(vector<int>& arr, int threshold,int divisor){
       int s = 0;

        for (int i = 0; i < arr.size(); i++) {
            s += (arr[i] + divisor - 1) / divisor;
        }

        return s;   

}






    int smallestDivisor(vector<int>& arr, int threshold) {

        int low=1;
        int high= max_arr(arr);
        // int mid=(low+high)/2;
        int s=0;
        int ans=-1;
        while(low<=high){

                  int mid=(low+high)/2;
            if(sum_of_d(arr,threshold,mid)<=threshold){
                ans=mid;
                high=mid-1;
                
            }
            else{
                low=mid+1;
            }
            
        }

    return ans;
        
    }
};