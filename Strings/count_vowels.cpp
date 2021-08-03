// You are given a string s. You need to count the total vowels in the string. 
// The string s contains lowercase letters only.

int countVowels(string str){
    int sum = 0;
    for (int i=0; i<str.length(); i++)
    {
        if ((str[i] == 'a') || (str[i] == 'e') || (str[i] == 'i') || (str[i] == 'o') || (str[i] == 'u'))
        {
            sum++;
        }
    }
    return sum;