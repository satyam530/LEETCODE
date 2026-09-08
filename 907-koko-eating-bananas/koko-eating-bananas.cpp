class Solution {
public:



       long long  total_hour(vector<int>& arr, int mid){
         long long  n=arr.size();
        long long total_hours=0;
        for(int i=0;i<n;i++){
            // total_hours=total_hours+ceil((long long )arr[i]/mid);

              total_hours += ((long long)arr[i] + mid - 1) / mid;

        
        }
        return total_hours;

    }
      long long  minEatingSpeed(vector<int>& arr, int h) {
           long long  n=arr.size();
       sort(arr.begin(),arr.end());
          long long  low=1;
       long long high=arr[n-1];
       long long ans=INT_MAX;

    while(low<=high){
           long long  mid=(low+high)/2;
           long long  total=total_hour(arr,mid);
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





// class Solution {
// public:

//     int total_hour(vector<int>& arr, int mid) {
//         int n = arr.size();
//         int total_hours = 0;

//         for (int i = 0; i < n; i++) {
//             total_hours = total_hours + (arr[i] + mid - 1) / mid;
//         }

//         return total_hours;
//     }

//     int minEatingSpeed(vector<int>& arr, int h) {
//         int n = arr.size();

//         sort(arr.begin(), arr.end());

//         int low = 1;
//         int high = arr[n - 1];
//         int ans = INT_MAX;

//         while (low <= high) {
//             int mid = (low + high) / 2;

//             int total = total_hour(arr, mid);

//             if (total <= h) {
//                 ans = mid;
//                 high = mid - 1;
//             }
//             else {
//                 low = mid + 1;
//             }
//         }

//         return ans;
//     }
// };