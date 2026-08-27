class Solution {
private:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
               c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }

public:
    string reverseVowels(string s) {
        int l = 0;
        int r = s.size() - 1;
        
        while (l < r) {
            // Move left pointer until it hits a vowel
            while (l < r && !isVowel(s[l])) {
                l++;
            }
            // Move right pointer until it hits a vowel
            while (l < r && !isVowel(s[r])) {
                r--;
            }
            
            // Swap the vowels
            if (l < r) {
                swap(s[l], s[r]);
                l++;
                r--;
            }
        }
        return s;
    }
};
