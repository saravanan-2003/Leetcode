class Solution {
public:
    int largestAltitude(vector<int>& gain) {
    //     int temp[gainSize+1];
    // temp[0]=0;
    int gainSize=gain.size();
    vector<int>v(gainSize+1);
    v[0]=0;
    for(int i=0;i<gainSize;i++){
        v[i+1]=v[i]+gain[i];
    }
    int i=0,max=-100;
    while(i<gainSize+1){
        if(v[i]>max){
            max=v[i];
        }
        i++;
    }
    return max;
    }
};