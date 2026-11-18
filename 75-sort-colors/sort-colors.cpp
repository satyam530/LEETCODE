class Solution {
public:
    void sortColors(vector<int>& arr) {
        int n=arr.size();
        int noo=0;
        int noc=0;
        int notw=0;

        for(int i=0;i<n;i++){
            if(arr[i]==0){
                noo++;
            }
            else if(arr[i]==1){
                noc++;
            }
            else {
                notw++;
            }

        }
        
        for(int i=0;i<n;i++){
            if(i<noo){
                arr[i]=0;
            }

            else if(i<(noo+noc)){
                arr[i]=1;

            }
            else arr[i]=2;
        }
    }
};