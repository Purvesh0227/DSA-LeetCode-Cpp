

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> minHeap; // min-heap

        for (int num : nums) {
            minHeap.push(num);
            if ((int)minHeap.size() > k)
                minHeap.pop(); // evict smallest
        }

        return minHeap.top(); // root = kth largest
    }
};