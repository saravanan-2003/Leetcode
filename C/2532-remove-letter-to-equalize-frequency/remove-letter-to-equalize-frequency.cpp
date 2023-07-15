class Solution {
public:
    bool equalFrequency(string word) {
        int freq[26];
        for(int i=0;i<26;i++){
            freq[i]=0;
        }
        for(int i=0;i<word.length();i++){
            freq[word[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            for(int j=i+1;j<26;j++){
                if(freq[i]<freq[j]){
                    int temp=freq[i];
                    freq[i]=freq[j];
                    freq[j]=temp;
                }
            }
        }
        int index=26;
        for(int j=25;j>=0;j--){

                if(freq[j]!=0){
                    index=j+1;
                    break;

                }//cout<<freq[j]<<" \t";
            }
    int count=0;
        for(int i=0;i<index;i++){
            if(freq[i]==1){
                count++;
            }
        }
        
        if(count==index && count!=0){
            cout<<"all are 1\n";
            return 1;
        }

        //chance 1
         count=0;
        for(int i=0;i<index-1;i++){
            if(freq[i]==freq[i+1]){
                count++;
            }
        }
        //chance 2
        if(count==index && count!=0){
            cout<<"all are   0 1\n ";
            return 0;
        }
        //chance 3
        else{
            int dcount=0,thatindex;
                for(int i=0;i<index;i++){
                    if(freq[i]==1){
                    dcount++;
                    //thatindex=i
                //cout<<count<<"   ";
                    }
                }
            if(dcount==1){
                if(count+dcount+1==index)
                    return 1;
                
            }
            if(index==1){
                return 1;
            }
            else if(count+1==index-1){
                if(freq[0]!=freq[1] && freq[0]+1==freq[1]){
                    cout<<" first index plus\n";
                    return 1;
                }
                else if(freq[0]!=freq[1] && freq[0]-1==freq[1]){
                    cout<<" first index minus\n";
                    return 1;
                }
                else if(freq[index-1]!=freq[index-2] && freq[index-1]-1==freq[index-2]){
                    cout<<" last index minus\n";
                    return 1;
                }
                else if(freq[index-1]!=freq[index-2] && freq[index-1]+1==freq[index-2]){
                    cout<<" last index plus\n";
                    return 0;
                }
            }
            
        }
        return 0;
    }
};