class Solution {
  public:
    string longestPalin (string s) {
        int n = s.size();
        bool dp[n][n];
        memset(dp,0,sizeof(dp));
        for(int i = 0; i < n; i++){
            dp[i][i] = true;
        }
        int begin = 0;
        int mx = 1;
        for(int i = 0; i < n-1; i++){
            if(s[i] == s[i+1]){
                mx = 2;
                dp[i][i+1] = true;
            }
        }
        for(int len = 3; len <= n; len++){
            for(int i = 0; i <= n-len; i++){
                int j = i+len-1;
                if(s[i] == s[j] && dp[i+1][j-1] == true){
                    dp[i][j] = true;
                    if(len > mx){
                        mx = len;
                        begin = i;
                    }
                }
            }
        }
        if(mx == 2){
            for(int i = 0; i < n-1; i++){
                if(s[i] == s[i+1]) {
                    begin = i;
                    break;
                }
            }
        }
        string ans = "";
        // cout << begin << ' ' << mx << ' ';
        for(int i = begin; i < begin+mx; i++){
            ans.push_back(s[i]);
        }
        return ans;
    }
};
