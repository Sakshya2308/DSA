map <int,int> hsh;
        for(int i = 0; i < n; i++){
            hsh[a[i]]++;
        }
       for(auto it: hsh){
           if(it.second > n/2) return it.first;
       }
       return -1;
