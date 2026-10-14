class Solution {
public:



// int lower_bound(vector<int> &arr){

// }
    int searchInsert(vector<int>& arr, int target) {
        int ans;
        int low,high;
        int n = arr.size();
        low=0;
        high=n-1;
        while(low<=high){
            int mid=(low+high)/2;

            if(arr[mid]>=target){
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