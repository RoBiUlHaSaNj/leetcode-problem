class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
 // Min-Heap using priority_queue (smallest element on top)
    priority_queue<int, vector<int>, greater<int>> pq;

    // Push all elements from the nums array into the priority_queue
    for (auto it : nums) {
        pq.push(it);
    }

    // Create a vector to store the sorted elements
    vector<int> ans;

    // Pop elements from the priority_queue and append them to the result vector
    while (!pq.empty()) {
        ans.push_back(pq.top());
        pq.pop();
    }

    return ans;
}


        
        
       
};
