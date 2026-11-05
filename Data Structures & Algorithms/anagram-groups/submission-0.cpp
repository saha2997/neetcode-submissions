class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string, vector<string>> mp;

        for(string str : strs) {

            // Step 1: Create frequency array
            int arr[26] = {0};

            for(char ch : str) {
                arr[ch - 'a']++;
            }

            // Step 2: Generate unique key
            string key = "";

            for(int i = 0; i < 26; i++) {
                key += to_string(arr[i]) + "#";
            }

            // Step 3: Group anagrams
            mp[key].push_back(str);
        }

        // Step 4: Convert map into answer
        vector<vector<string>> ans;

        for(auto it : mp) {
            ans.push_back(it.second);
        }

        return ans;
    
    }
};
