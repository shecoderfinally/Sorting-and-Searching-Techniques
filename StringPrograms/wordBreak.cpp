/**
 * 
 * https://www.youtube.com/watch?v=2NaaM_z_Jig      --> watch this video.
 * 
 * Watch above video for clarity.
 * 
 */
#include <bits/stdc++.h>
using namespace std;

int wordBreak(string A, vector<string> &B);

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dict;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dict.push_back(S);
        }
        string line;
        cin>>line;
        cout<<wordBreak(line, dict)<<"\n";
    }
}


int wordBreak(string A, vector<string> &B) {
    
    int dp[A.length()];// here we store count of possible strings i.e dp[i] is the count of possible string from given dictionary by considering till ith character in given string.
    memset(dp, 0, sizeof(dp));

    // here we use 2D loop to consider all suffixes
    /*
        Let string be "pepcodingloves" --> then if 'i' points to 's' (in loves) , using 'j' we iterate from j=0 to j=i,
        so, in this process we consider all suffixes like "pepcodingloves"  , "epcodingloves" ,"pcodingloves" etc.
        We consider all suffixes and check all possible words.

        Ex: Dict[] ={ pep,coding,pepcoding,loves}
        when considering word as "pepcoding", we check different splits as pepcoding, p-epcoding,pe-coding,pep-coding,pepc-oding,pepco-ding,pepcod-ing etc...
        here the split "pep-coding" and "pepcoding" are our interest strings as they contribute to count
        here if we append "coding" to "pep", we  get 1-word and w/o any splitting  also we get "pepcoding" which is also there in dictionary, so these are the 2-splits
        Now when we get "coding" as the word, if we append it to "pep", we get 2nd split then, so we consider dp[index-'coding'] + dp[index value of ending of 'pep'].
    */

    for(int i=0;i<A.length();i++)
    {
        for(int j=0;j<=i;j++)
        {
            string word2check=A.substr(j, i-j+1);// taking substring suffix
            //cout<<word2check<<" ";
            if(find(B.begin(), B.end(), word2check)!=B.end())// we check if  above substring is part of dictionary given
            {
                if(j>0)// if the substring is part of dictionary given, then we add current count dp[i] to previous valid count dp[j-1] (valid count is where we last got valid string)
                {
                    dp[i] += dp[j-1];
                }
                else// this the case when 'j'  is still poining at-0 and but i is point to a end of word which is in dictionary 
                // consider "pep", 'j'  points to 'first-p' and i points to 'last-p', so, here j=0 when we do j-1 we get error, but this is a valid word as it is there in dictionary, so we add this count too.
                    dp[i] += 1;
            }
            //cout<<dp[i]<<"\n";
        }
        //cout<<"\n";
    }
    return dp[A.length()-1]>0;
}