class Solution {
    public:
        int jump(vector<int>& nums) {
            int n = nums.size();
            vector<int> vec(n,INT_MAX);
            vec[0]=0;
            for(int i = 0 ; i < n-1 ; i++){
                if(i+nums[i]>=n-1){
                    vec[n-1]= min(vec[i]+1,vec[n-1]);
                    break;
                }
                for(int j = i+1; j<= i+nums[i]; j++){
                    vec[j]=min(vec[j], vec[i]+1);
                }
            }
            return vec[n-1];
        }
    };