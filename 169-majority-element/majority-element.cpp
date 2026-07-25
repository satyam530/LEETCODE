class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int n=arr.size();
        int element=0;
        int count=0;
        for(int i=0;i<n;i++){
            if(count ==0){
                element=arr[i];
            }
            if(element==arr[i]){
                count++;
            }
            else count--;

            
        }
        return element;
        
    }
};