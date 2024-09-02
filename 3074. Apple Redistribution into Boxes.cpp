class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {

        int totalApples = 0;

        for(int a : apple) {
            totalApples += a;
        
        }
       
      sort(capacity.rbegin(), capacity.rend());

        int count = 0;
        int currentCapacity = 0;
        
        for(int i = 0; i < capacity.size(); i++) {
            currentCapacity += capacity[i];
            count++;

        
            if(currentCapacity >= totalApples) {
                break;
            }
        }

        return count;
    }


 
    
};
