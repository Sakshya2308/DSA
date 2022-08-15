class Solution {
public:
    string countAndSay(int n) {
       vector<string>ans(31);
        ans[1] = "1";
        ans[2] = "11";
        ans[3] = "21";
        if(n>=4){
        for(int i = 4; i < 31; i++){
            string s = ans[i-1];
            int count = 1;
            string k = "";
           for(int j = 0; j < s.size(); j++){
             if(s[j] == s[j+1]) count++;
            else{
                k+=to_string(count);
                k+=s[j];
                count = 1;
            }
        }
            ans[i] = k;
        }
        }
        return ans[n];
    }
};
