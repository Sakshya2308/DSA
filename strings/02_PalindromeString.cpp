class Solution{
public:	
	
	
	int isPalindrome(string s)
	{
	   for(int i = 0; i < s.size()/2; i++){
	       if(s[i]!=s[s.size()-1-i]) return 0;
	   }
	   return 1;
	}

};
