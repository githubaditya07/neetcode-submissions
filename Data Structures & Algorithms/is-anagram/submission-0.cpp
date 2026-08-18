class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }

        unordered_map<char, int> hash_map1, hash_map2;

        for (int i = 0; i < s.size(); i++) {
            hash_map1[s[i]]++;
        }

        for (int i = 0; i < t.size(); i++) {
            hash_map2[t[i]]++;
        }

        return hash_map1 == hash_map2;
    }
};