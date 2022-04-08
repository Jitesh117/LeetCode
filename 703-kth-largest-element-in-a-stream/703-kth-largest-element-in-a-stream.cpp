class KthLargest {
public:
    priority_queue<int,vector<int>,greater<int>> min_heap;
    int kk;
    KthLargest(int k, vector<int>& nums) {
        kk=k;
        for(int i=0;i<nums.size();i++)
        {
            min_heap.push(nums[i]);
            if(min_heap.size()>kk)min_heap.pop();
        }
    }
    
    int add(int val) {
        min_heap.push(val);
         if(min_heap.size()>kk)min_heap.pop();
        return min_heap.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */