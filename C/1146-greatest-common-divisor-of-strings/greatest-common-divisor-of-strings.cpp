class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int end, i, h;
        string temp = str2;
        while (str2.size() != 0) {
            i = 0;
            while (i < str1.size()) {
                if (str1.substr(i, str2.size()) == str2) {
                    i = i + str2.size();
                    end = i;
                } else {
                    str2 = str2.substr(0, str2.size() - 1);
                    break;
                }
            }
            if (end == str1.size()) {
                h = 0;
                while (temp.substr(h, str2.size()) == str2) {
                    h += str2.size();
                }
                if (h == temp.size()) {
                    break;
                } else {
                    str2 = str2.substr(0, str2.size() - 1);
                }
            }
        }
        return str2;
    }
};