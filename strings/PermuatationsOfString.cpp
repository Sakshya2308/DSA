class Solution
{
	public:
	    void permute(vector <string> &ans, string s, int l, int r){
	        if(l == r) ans.push_back(s);
	        else{
	            for(int i = l; i <= r; i++){
	                swap(s[l],s[i]);
	                permute(ans,s,l+1,r);
	                swap(s[l],s[i]);
	            }
	        }
	    }
		vector<string>find_permutation(string S)
		{
		    // Code here there
		vector <string> ans;
		set <string> x;
		vector <string> y;
		    int n = S.size();
		    permute(ans,S,0,n-1);
		    sort(ans.begin(),ans.end());
		    for(auto i: ans){
		        x.insert(i);
		    }
		    for(auto it: x){
		        y.push_back(it);
		    }
		    return y;
		}
};
