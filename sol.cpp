class Solution {
public:
    vector<vector<int>>ans;
    void solve(vector<int>A,vector<int>curr,int sum,int id,int T){
        if(sum==T){
            ans.push_back(curr);
            return ;
        }
        if(sum>T)return;
        for(int i=id;i<A.size();i++){
            if(i>id&&A[i]==A[i-1])continue;
            curr.push_back(A[i]);
            solve(A,curr,sum+A[i],i+1,T);
            curr.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& A, int T) {
        vector<int>curr;
        sort(A.begin(),A.end());
        solve(A,curr,0,0,T);
        return ans;
        
    }
};
