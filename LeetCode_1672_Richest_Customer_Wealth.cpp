class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max = 0;
        int Rsize = accounts.size();
        int Csize = accounts[0].size();
        for(int i=0; i<Rsize; i++){
            int sum = 0;
            for(int j=0; j<Csize; j++){
                sum += accounts[i][j];
            }
            if(max < sum){
                max = sum;
            }
        }
        return max;
    }
};