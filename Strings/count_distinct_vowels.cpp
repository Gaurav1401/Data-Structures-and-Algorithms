// You are given a string s. 
// You need to count the total distinct vowels in the string. The string s contains lowercase letters only.

int countVowels(string str){
    
    int sum = 0;
    int count_vow[256] = {0};
    for(int i=0; i<str.length(); i++)
    {
        if ((str[i] == 'a') || (str[i] == 'e') || (str[i] == 'i') || (str[i] == 'o') || (str[i] == 'u'))
        {
            count_vow[str[i]]++;
        }
    }
    for(int i=0; i<256; i++)
    {
        if(count_vow[i] > 0)
        {
            sum++;
        }
    }
    return sum;
    
}