class Solution {
public:
int lower_bound(vector<int>& arr,int target){
    int n=arr.size();
   int  low=0;
    int high=n-1;
    int ans=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>=target){
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    return ans;
}



int upper_bound(vector<int>& arr,int target){
    int n=arr.size();
   int low=0;
    int high=n-1;
    int up=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>target){
            up=mid;
            high=mid-1;
        }
        else  low=mid+1;
    }
    return up;

}




    vector<int> searchRange(vector<int>& arr, int target) {

        int lb=lower_bound(arr,  target);
        int ub=upper_bound(arr, target);

        if(lb==arr.size()||arr[lb]!=target){
            return{-1,-1};
        }

        return{lb,ub-1};
        
    }
};