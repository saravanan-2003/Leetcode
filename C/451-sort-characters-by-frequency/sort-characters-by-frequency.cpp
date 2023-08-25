class Solution {
public:
string repeat(string new_al,int count,char strc){
    for(int i=0;i<count;i++){
        new_al+=strc;
    }
    return new_al;
}
    string frequencySort(string s) {
        int freq[123];
        for(int i=0;i<123;i++){
            freq[i]=0;
        }
        char check[123];
        int add=0,sub=0,math=0;
        for(int i=0;i<123;i++){
            if(i>=65 && i<=90){
                check[i]='A'+add++;
            }
            if(i>=97 && i<=122){
                check[i]='a'+sub++;
            }
            if(i>=48 && i<=57){
                check[i]='0'+math++;
            }
        }
        for(int i=0;i<s.length();i++){
            freq[s[i]]++;
        }
        int temp,char_temp;
        for(int i=0;i<123;i++){
            for(int j=i+1;j<123;j++){
                if(freq[i] < freq[j]){
                    temp=freq[i];
                    freq[i]=freq[j];
                    freq[j]=temp;

                    char_temp=check[i];
                    check[i]=check[j];
                    check[j]=char_temp;
                }
            }
        }

        // for(int i=0;i<123;i++){
        //     if(freq[i]!=0){
        //         cout<<check[i]<<" ";
        //     }
        // }
        string req="";
        for(int i=0;i<123;i++){
            // for(int j=0;j<freq[i];j++){
                if(freq[i]!=0)
                req=repeat(req,freq[i],check[i]);
                // req=req+check[i];
            // }
        }
        return req;
    }
};