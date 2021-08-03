// You are given a string s. You need to find if the string is a panagram or not.
// A panagram contains all the letters of english alphabet at least once.

string caseConversion(string str){
for(int i=0; i<str.length(); i++)
{
    if((str[i] >= 65)&&(str[i] <= 90)) // If any uppercase character is encountered only then
    {
        str[i] += 32; // convert to lowercase
    }
}
return str;
}

bool isPanagram(string str)
{

    int count_char[26] = {0}; // to keep the count of all characters in the string
    string lower_str = caseConversion(str); // converting the whole string to lowercase
    for(int i=0; i < lower_str.length(); i++)
    {
        count_char[lower_str[i] - 97]++;
    }
    
    int flag = 0;
    for (int i=0; i<26; i++)
    {
        if(count_char[i] == 0)
        {
            flag++; // if a character is missing the flag++
            break;
        }
    }
    if (flag > 0)
        return false;
    else
        return true;
}