class Solution {
public:
    void sortColors(vector<int>& arr) {
        int low,mid;
        low=0;
        mid=0;
        int high=arr.size()-1;


        while(mid<=high){
            if(arr[mid]==2){
                int temp=arr[high];
                arr[high]=arr[mid];
                arr[mid]=temp;
                high--;
                
            }

            else if(arr[mid]==0){
                 int temp=arr[mid];
                arr[mid]=arr[low];
                arr[low]=temp;
                low++;
                mid++;
            }

            else{
                mid++;
            }
        }

        
    }
};