class Solution {
public:

     long long  minn(vector<int>& arr){
        int mn=INT_MAX;
        for(int i=0;i<arr.size();i++){
            mn=min(arr[i],mn);
        }
        return mn;
    }

    long long maxx(vector<int>& arr){
        int mx=INT_MIN;
        for(int i=0;i<arr.size();i++){
            mx=max(arr[i],mx);
        }
        return mx;
    }

    // bool possible(vector<int>& arr,int days, int m, int k){

    //     int count=0;
    //     int blom=0;

    //     for(int i=0;i<arr.size();i++){
    //         if(arr[i]<=days){
    //             count++;
    //             blom=blom+(count/k);
    //         }
    //         else{
    //             count=0;
    //         }
    //     }
    //        blom=blom+(count/k);
    //     if (   blom>=m){
    //         return true;
    //     }
    //     else return false;

    // }


  bool possible(vector<int>& arr, int days, int m, int k) {
        int count = 0, bouquets = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] <= days) {
                count++;
                if (count == k) {
                    bouquets++;
                    count = 0;
                }
            } else {
                count = 0;
            }
        }
        return bouquets >= m;
    }






    long long minDays(vector<int>& arr, int m, int k) {
            long long n=arr.size();
        if(1LL * m * k > arr.size()){
            return -1;
        }

      int low=minn(arr);
      int high=maxx(arr);
      int ans=0;

      while(low<=high){
        int mid=(low+high)/2;
        if(possible(arr,mid,m,k)==true){
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