class Solution {
public:
    int first(vector<int>& arr, int target) {
        int low = 0, high = arr.size() - 1;
        int ans = -1;
        while (low <= high) {
            int mid = (high + low) / 2;
            if (arr[mid] == target) {
                ans = mid;        // record, then keep looking left
                high = mid - 1;
            } else if (arr[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return ans;
    }

    int last(vector<int>& arr, int target) {
        int low = 0, high = arr.size() - 1;
        int ans = -1;
        while (low <= high) {
            int mid = (high + low) / 2;
            if (arr[mid] == target) {
                ans = mid;        // record, then keep looking right
                low = mid + 1;
            } else if (arr[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& arr, int target) {
        int lower = first(arr, target);
        if (lower == -1) return {-1, -1};
        int upper = last(arr, target);
        return {lower, upper};
    }
};