class Solution {
public:
    string caseConversion(string str) {
        for (int i = 0; i < str.length(); i++)
        {
            if ((str[i] >= 65) && (str[i] <= 90)) // If any uppercase character is encountered only then
            {
                str[i] += 32; // convert to lowercase
            }
        }
        return str;
    }
    string missingPanagram(string str) {

        int rec[26] = { 0 };
        string res = ""; // will contain all the characters missing in the anagram
        string lower_str = caseConversion(str); // converting to lowecase
        for (int i = 0; i <= str.length(); i++)
        {
            rec[lower_str[i] - 97]++; // will converts the count of each character in array present in the input string 
        }

        for (int i = 0; i < 26; i++)
        {

            if (rec[i] == 0)
            {
                res += char(i + 97); // storing the lowercase characters
            }
            else if (rec[i] > 0)
            {
                continue;
            }
        }

        if (res.length() == 0)
            return "-1";
        else
            return res;

    }

};