class Solution {
public:
    int maximumGroups(vector<int>& grades) {
        int count = 1 ;
        int n = grades.size();
        while(count *(count+1)/2 <=n) count++ ;
        return --count ;
    }
};