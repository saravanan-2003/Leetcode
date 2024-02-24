class Solution {
public:
    string convert(string s, int numRows) {

        int num_cols = s.length();
// Dynamically allocate the vector based on the number of rows needed
vector<vector<string>> rowww(numRows, vector<string>(num_cols));
        vector<string> v(min(numRows, int(s.length())));
        int i=0,l=0,m=0,z;
        
        
        while(i<s.length()){
            for(int j=0;j<numRows && i<s.length();j++,l++){
                v[l]+=s[i++];
                //cout<<s[i]<<" "<<m<<" ";
            }
            //cout<<endl;
            
            z=numRows-2;
            
            if(z>=1){
                l-=2;
                m++;
                for(int j=0;j<z && i<s.length();j++,l--){
                    v[l]+=s[i++];
                    //cout<<l<<" "<<m<<" ";
                }
                m++;
                //cout<<endl;
            }
            else{
                l=0;
                m++;
            }
            
            
        }
        string str="";
        // for(int i=0;i<numRows;i++){
        //     for(int j=0;j<num_cols;j++){
        //         cout<<v[i][j]<<" ";
        //         if(v[i][j]!="0"){
        //             str+=v[i][j];
        //         }
        //     }
        //     cout<<endl;
        // }
        string result;
        for (const string& row : v) {
            result += row;
        }
        return result;
    }
};