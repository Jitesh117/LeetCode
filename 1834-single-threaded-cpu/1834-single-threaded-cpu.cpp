class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& tasks) {
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq; // min heap of tasks, sorted first by processing time then by index.
        long n = tasks.size(), time = 0, i = 0; // `time` is the current time, `i` is the read pointer
        for (int i = 0; i < n; i++) tasks[i].push_back(i); // append the index to each task
        sort(tasks.begin(),tasks.end()); // sort the input array so that we can take the tasks of small enqueueTime first
        vector<int> result;
        while (i < n or pq.size()) { // stop the loop when we exhausted the input array and the tasks in the heap.
            if (pq.empty()) {
                time = max(time, (long)tasks[i][0]); // nothing in the heap? try updating the current time using the processing time of the next task in array
            }
            while (i < n and time >= tasks[i][0]) { // push all the tasks in the array whose enqueueTime <= currentTime into the heap
                pq.emplace(tasks[i][1], tasks[i][2]);
                ++i;
            }
            auto [pro, index] = pq.top();
            pq.pop();
            time += pro; // handle this task and increase the current time by the processingTime
            result.push_back(index);
        }
        return result;
    }
};