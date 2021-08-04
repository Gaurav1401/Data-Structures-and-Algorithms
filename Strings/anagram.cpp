// Given two strings a and b consisting of lowercase characters. 
// The task is to check whether two given strings are an anagram of each other or not. 
// An anagram of a string is another string that contains the same characters, 
// only the order of characters can be different. For example, “act” and “tac” are an anagram of each other.

class Solution
{
public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b) {
        if (a.length() != b.length())
        {
            return false;
        }

        int count[26] = { 0 };
        for (int i = 0; i < a.length(); i++)
        {
            count[a[i] - 'a']++;
        }

        for (int i = 0; i < b.length(); i++)
        {
            count[b[i] - 'a']--;
        }

        for (int j = 0; j < 26; j++)
        {
            if (count[j] > 0)
            {
                return false;
            }
        }
        return true;

    }
};