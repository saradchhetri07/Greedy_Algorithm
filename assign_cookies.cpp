//https://leetcode.com/problems/assign-cookies/submissions/953703898/

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        if(g.size()==0 || s.size() == 0){
            return 0;
        }
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        //size of greed array
        int n = g.size();
        // size of size of cookies
        int m = s.size();
        int total=0;
        int current =0;
        for(int i=0;i<m;i++){
            if( current<n && s[i]<g[current]){
                continue;
            }else if(current<n && s[i]>=g[current]){
                total++;
                current++;
            }
        }
        // int total =0;
        // int current = 0;
        // for(int i=0;i<n;i++){
        //     if(current<m && s[current]>=g[i]){
        //         total++;
        //         current++;
        //     }
        // }
        return total;
    }
};
