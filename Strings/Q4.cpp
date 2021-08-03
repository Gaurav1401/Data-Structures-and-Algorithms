// You are given a string s consisting of multiple words. You need to count the total words in the string. 
//  Words are separated by a single space.

int countWords(string str){
    
    int sum = 0;
    for(int i=0; i<str.length(); i++)
    {
        if((str[0] != 32) && (str[str.length() - 1] != 32)) // So that my doesn't count the initial and last space
        {
            if (str[i] == 32) // counting the spaces b/w two words
            {
                sum++;
            }
        }
    }
    return sum+1; // 1 space separates 2 two words, n spaces separate n+1 words.
}