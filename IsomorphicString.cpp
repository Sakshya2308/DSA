bool areIsomorphic(string str1, string str2)
    {
        unordered_map <char,char> mp1,mp2;
        if(str1.size() != str2.size()){
            return false;
        }
        for(int i = 0 ; i < str1.size(); i++){
            if(mp1.find(str1[i]) == mp1.end()) mp1[str1[i]] = str2[i];
            if(mp2.find(str2[i]) == mp2.end()) mp2[str2[i]] = str1[i];
            
            if(mp1[str1[i]] != str2[i] || mp2[str2[i]] != str1[i]) return false;
        }
        return true;
        
    }
