
///https://www.geeksforgeeks.org/problems/find-the-frequency/1
class Solution {
  public:
    int findFrequency(vector<int> arr, int x) {
        // Your code here
        map<long long ,int>cnt;

       for ( auto u :  arr) cnt[u]++;
        return cnt[x];
    }
};
