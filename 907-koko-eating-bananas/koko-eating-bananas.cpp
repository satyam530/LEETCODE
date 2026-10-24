class Solution {
public:

//   int total_time(vector<int>& arr,int hourly){
//     long long total_hrs=0;
//     for(int i=0;i<arr.size();i++){
//         // total_hrs=total_hrs+(ceil(arr[i]/hourly));

//         //  total_hrs += (arr[i] + hourly - 1) / hourly; 

//          total_hrs += (arr[i] + 1LL * hourly - 1) / hourly;
//     }
//     return total_hrs;
//   }





long long total_time(vector<int>& arr, int hourly) {
    long long total_hrs = 0;

    for (int i = 0; i < arr.size(); i++) {
        total_hrs += (arr[i] + 1LL * hourly - 1) / hourly;
    }

    return total_hrs;
}



  int mxx(vector<int>& arr){
    int mx=INT_MIN;
    for(int i=0;i<arr.size();i++){
        mx=max(mx,arr[i]);
    }
    return mx;
  }

    int minEatingSpeed(vector<int>& arr, int h) {
        int low,high;
        low=1;
        high=mxx(arr);
        //   int mid=(low+high)/2;
        // int total=total_time(arr,mid);
        // int mid=(low+high)/2;
        int ans=0;

        while(low<=high){
            int mid=(low+high)/2;

             long long total=total_time(arr,mid);
            if(total<=h){
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