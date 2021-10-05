
class Solution {
public:
    // My Approach - Pretty Basic : Accepted ( faster than only 5% solutions and memory less than 18% solutions)
    /*int euc(vector<int>& a , vector<int>& b){
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
    }*/
    
    //Online Approach - We can improve our runtime if we sort points by x coordinate. 
    //That way, we only process points in [qx - r, qx + r] interval. We use binary 
    //search to find the start of that interval.

    //Note that we need to fiddle with data structures here to make it fast. 
    //Sorting vector of vectors, or using multiset adds noticeable overhead.
    
    //Answer found from Discussion Tab on LeetCode
    
    int sqr(int a) {
        return a * a;
    }

//find lower bound of left boundry
int find_left_boundry_index(vector<vector<int> > & points , int x_center , int y_center , int r) {

    int lo = 0, hi = points.size();

    while (lo < hi) {

        int mi = lo + (hi - lo ) / 2;

        if (x_center - r <= points[mi][0])
            hi = mi;
        else
            lo = mi + 1;

    }
    return hi == points.size() or (points[hi][0] > x_center + r or points[hi][0] < x_center - r) ? points.size() : hi;

}
vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {

    sort(points.begin(), points.end());
    vector<int> ans;

    for (int i = 0; i < queries.size(); i++) {

        int x_center = queries[i][0], y_center = queries[i][1], r = queries[i][2];
        int index = find_left_boundry_index(points, x_center , y_center, r); 
        int count = 0;

        for (int j = index; j < points.size() and points[j][0] <= x_center + r; j++) {

            int x = points[j][0];
            int y = points[j][1];
			// square of distance from center
            count += sqr(x_center - x) + sqr(y_center - y) <= r * r;
        }

        ans.push_back(count);
    }
    return ans;
}
};
