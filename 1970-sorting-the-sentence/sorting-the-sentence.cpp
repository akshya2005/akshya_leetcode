class Solution {
public:
    string sortSentence(string s) {
        stringstream ss(s);
        vector<string> words;
        string word;
        
        while (ss >> word) {
            words.push_back(word);
        }

        
        sort(words.begin(), words.end(), [](const string &a, const string &b) {
            
            return a.back() < b.back();  
        });

       
        for (int i = 0; i < words.size(); ++i) {
            words[i].pop_back();  
        }

        
        stringstream result;
        for (int i = 0; i < words.size(); ++i) {
            if (i > 0) result << " ";  
            result << words[i];
        }

        return result.str();  
    }
};

    