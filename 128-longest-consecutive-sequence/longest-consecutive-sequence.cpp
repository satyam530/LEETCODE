class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        int n=arr.size();
        int count_current,longest;
        int last_smaller=INT_MIN;
        count_current=0;
        longest=0;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            if(arr[i]-1==last_smaller){
                count_current++;
                last_smaller=arr[i];
            }

            else if(arr[i]!=last_smaller){
                count_current=1;
                last_smaller=arr[i];
            }

              longest=max(longest,count_current);
              
        }
      

        return longest;

    }
};