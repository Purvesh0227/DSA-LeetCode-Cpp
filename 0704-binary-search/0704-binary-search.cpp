class Solution {
public:
    int bins(vector<int>arr,int tar, int st , int end)
    {
        if(st<=end)
        {
            int mid = st + (end-st)/2;

            if(arr[mid] == tar) return mid;
            else if(arr[mid] >= tar)
            {
               return bins(arr,tar,st,mid-1);
            }

            else
            {
                return bins(arr,tar,mid+1,end);
            }
        }
        return -1;

    }
    int search(vector<int>& arr, int tar) 
    {

        return bins(arr,tar,0,arr.size()-1);
        
    }
};