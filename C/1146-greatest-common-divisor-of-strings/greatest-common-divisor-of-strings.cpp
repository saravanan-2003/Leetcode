class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int end;
        // if(str1.size()<str2.size()){
        //     int l=1;
        // while(l<str2.size()){
        //     int i=0;
        //     int k=l;
        //     while(i<str1.size()){
        //         if(str1.substr(i,l)==str2.substr(0,l)){
        //             i=i+l;
        //             end=i;
        //         }
        //         else{
        //             l++;
        //             break;
        //         }
        //     }
        //     if(end==str1.size()){
        //         return str2.substr(0,l);
        //         break;
        //     }
        // }
            
        // }
        string temp=str2;
        while(str2.size()!=0){
            int i=0;
            while(i<str1.size()){
                if(str1.substr(i,str2.size())==str2){
                    i=i+str2.size();
                    end=i;
                }
                else{
                    str2=str2.substr(0,str2.size()-1);
                    //cout<<str2.size()<<endl;
                    break;
                }
            }
            if(end==str1.size()){
                int h=0;
                while(temp.substr(h,str2.size())==str2){
                    h+=str2.size();
                }
                if(h==temp.size()){
                    break;
                }
                else{
                    str2=str2.substr(0,str2.size()-1);
                }
               
            }
        }
        return str2;
    }
};