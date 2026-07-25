class Solution {
public:
    int majorityElement(vector<int>& arr) {

        int n=arr.size();
        // int count =0;
        int majority=0;
        int element;
        for(int i=0;i<n;i++){
            int count =0;
            for(int j=0;j<n;j++){
                element =arr[i];
                if(element==arr[j]){
                    count++;
                 
                    
                }

                if(count>n/2){
                    return arr[j];
                }
                  
            }
          
        }

    return -1;
        
    }
};