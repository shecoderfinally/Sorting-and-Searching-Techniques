
class Solution {
public:
    // My Approach - Pretty Basic : Accepted ( faster than only 5% solutions and memory less than 18% solutions)
    int euc(vector<int>& a , vector<int>& b){
        int ans = 0; 
        
        ans = ceil(sqrt( pow((b[0] - a[0] ), 2) + pow((b[1] - a[1] ), 2)));
        
        return ans ; 
    }
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        int n = queries.size() ;
        vector<int> ans(n, 0) ;
        int cnt = 0 ; 
        
        for(int i = 0 ; i < n ; ++i){
            cnt = 0 ;
            for(auto s : points){
                if(euc(s , queries[i]) <= queries[i][2])
                    ++cnt;
            }
            ans[i] = cnt ; 
        }
        
        return ans ; 
    }
    
    //Online Approach - We can improve our runtime if we sort points by x coordinate. 
    //That way, we only process points in [qx - r, qx + r] interval. We use binary 
    //search to find the start of that interval.

    //Note that we need to fiddle with data structures here to make it fast. 
    //Sorting vector of vectors, or using multiset adds noticeable overhead.
};
