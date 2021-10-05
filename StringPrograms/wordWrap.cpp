/*
    https://www.youtube.com/watch?v=FVWAEzHSbRo ==> code library video
    https://www.geeksforgeeks.org/word-wrap-problem-dp-19/ ==> article
    https://practice.geeksforgeeks.org/problems/word-wrap1646/1# ==> practice link.

*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int solveWordWrap(vector<int>nums, int k) 
    { 
        // 3 arrays are needed.
        // 1 for finding extra space.
        // 1 for cost
        // 1 for storing optimal cost
        
        int n=nums.size();
        int space[n+1][n+1], cost[n+1][n+1], optimalCost[n+1];
        
        // how to fill space array?
        // space means extra space left when u fill i to j words in the line.
        // each line can have 6 characters only.
        // so if u fill 1st word as per example: then u will have 3 spaces left.
        // so space[1][1]=3
        // if u fill 1st word and 2nd word in a line then the space left is 0.
        // ------ => aaa bb = 0
        // space[1][2] = 0 = space left after filling 1st word - len of 2nd word - 1 (-1 for space b/w 1st word and 2nd word)
        
        // like this we will fill space matrix
        
        for(int i=1;i<=n;i++)
        {
            space[i][i]=k-nums[i-1]; // in a line filling i and i. #spaces left = k-nums[i-1]
            for(int j=i+1;j<=n;j++) // in a line filling all words b/w i to j
            {
                space[i][j]=space[i][j-1]-nums[j-1]-1;  // space left from prev filling - #chars_of_this_word - 1 (for space b/w prev word and this word)
            }
        }// here space[i][j] can be -ve also. this will be the case when we fill more words than line can take.
        
        // cost matrix.
        // when ever space is -ve, it means u have more words than line can take
        // so u shudnt consider it. so fill -ve values with INT_MAX
        // for last word, u wont consider extra space when extra space is left. (space non -ve) so put 0 
        // in all other cases, square the space.
        
        for(int i=1;i<=n;i++)
        {
            for(int j=i;j<=n;j++)
            {
                if(space[i][j]<0) // extra words case.
                    cost[i][j]=INT_MAX;
                else if(j==n && space[i][j]>=0) // last word case
                    cost[i][j]=0;
                else // others.
                    cost[i][j]=space[i][j]*space[i][j];
            }
        }
        
        
        // optimal cost array.
        // optimalCost[i] represents the minimum extra cost when we have i words.
        
        optimalCost[0]=0;
        for(int i=1;i<=n;i++) // consider
        // 1 word
        // 2 words .. 3 words .. so on.
        {
            optimalCost[i]=INT_MAX; // initialize.
            for(int j=1;j<=i;j++) // when we have 2 words
            // we can arrange them in 2 ways:
            // both words in 1 line [when they dont go beyond line limit]
            // 2 lines [1 word in each].
            
            // similarly for n words we will have multiple ways of arrangement of words from 1 to i.
            
            // j iterates through previous words.
            // when i=3, j starts from 1
            // i=3 j=1 ==> if we put all 1,2,3 words in 1 line then
            // i=3 j=2 ==> putting words 2,3 in 1 line and 1st word in other line
            // i=3 j=3 ==> putting 3rd word in 1 line and considering optimal arrange for previous words. 
                // the cost for optimal arrangement for previous words is obtained by considering optimalCost[j-1]
            {
                if(cost[j][i]!=INT_MAX && optimalCost[j-1]!=INT_MAX && optimalCost[j-1]+cost[j][i]<optimalCost[i])
                // when cost[j][i] is not max => means it didnt exceed the line limit.
                // optimalCost[j-1]!=INT_MAX => when previous optimalCost is not INT_MAX.
                // optimalCost[j-1]+cost[j][i]<optimalCost[i] ==> choosing minimum cost arrangement among multiple arrangements,
                    optimalCost[i]=optimalCost[j-1]+cost[j][i];
            }
        }
        
        return optimalCost[n]; // for n words optimalCost is returned.
    } 
};

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, k;
        cin >> n;
        vector<int>nums(n);
        for (int i = 0; i < n; i++)cin >> nums[i];
        cin >> k;
        Solution obj;
        cout << obj.solveWordWrap(nums, k) << endl;
	}
	return 0;
}