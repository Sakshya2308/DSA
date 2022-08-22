int hsh[n+1];
        memset(hsh,0,sizeof(hsh));
        for(int i = 0; i < n; i++){
            hsh[arr[i]]++;
        }
        int *ans = new int[2];
        for(int i = 1; i <=n; i++){
            if(hsh[i] == 2) ans[0] = i;
            if(hsh[i] == 0) ans[1] = i;
        }
        return ans;
