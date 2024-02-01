// Question Link : https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/
class Solution {
public:
    int strStr(string haystack, string needle) {
        size_t found = haystack.find(needle);

        if (found != std::string::npos) {
            return static_cast<int>(found);
        } else {
            return -1;
        }
    }
};
