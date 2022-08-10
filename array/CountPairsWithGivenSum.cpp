class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
       int ans = 0;
       unordered_map<int,int> hsh;
       for(int i = 0; i < n; i++){
            hsh[arr[i]]++;
       }
       for(int i = 0; i < n; i++){
           if(hsh[arr[i]]&&hsh[k-arr[i]]){
               ans++;
           }
       }
       return ans;
    }
};
