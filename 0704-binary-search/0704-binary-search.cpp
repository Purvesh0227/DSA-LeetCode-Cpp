class Solution {
public:
    int bins(vector<int>& arr, int t, int low, int high) {
        if(low > high)
            return -1;

        int mid = low + (high - low) / 2;

        if(arr[mid] == t)
            return mid;
        else if(arr[mid] > t)
            return bins(arr, t, low, mid - 1);
        else
            return bins(arr, t, mid + 1, high);
    }

    int search(vector<int>& arr, int t) {
        return bins(arr, t, 0, arr.size() - 1);
    }
};