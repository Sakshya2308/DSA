//calculate XOR of the whole array and simultaneously the whole number till the, XOR the result of both which will be the answer.
int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int y = nums[0];
        int x = nums[0];
        int XOR = 0;
        for(int i = 1; i < n; i++){
            x^=nums[i];
            if(x==0){
                continue;
            }
            else y^=nums[i];
            XOR^=i;
        }
        XOR^=n;
        return XOR^y;
    }
