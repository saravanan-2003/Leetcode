class Solution {
public:
    char repeatedCharacter(string s) {
        int arr[256];
    for(int i=0;i<256;i++){
        arr[i]=0;
    }
    int j=0;
    for(int i=0;i<s.size();i++){
        arr[s[i]]++;
        if((arr[s[i]])==2){
            j=i;
            break;
        }
    }
    return s[j];
    }
};