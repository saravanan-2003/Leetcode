class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int steps=0,cap=capacity;
        for(int i=0;i<plants.size();i++){
            if(plants[i]<=capacity){
                capacity=capacity-plants[i];
                steps++;
            }
            else{
                steps=steps+i+i+1;
                capacity=cap;
                capacity=capacity-plants[i];
            }
        }
        return steps;
    }
};