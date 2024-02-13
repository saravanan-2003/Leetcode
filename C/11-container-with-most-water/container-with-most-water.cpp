class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1;
        int length,min,heighttotal,total=0;
        while(i<j){
            length=j-i;
            if(height[i]<height[j]){
                min=height[i];
                i++;
            }
            else{
                min=height[j];
                j--;
            }
            heighttotal=min*length;
            if(heighttotal>total){
                total=heighttotal;
            }
        }
        return total;
    }
};