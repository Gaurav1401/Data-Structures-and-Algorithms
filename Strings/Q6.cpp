// You are given a string s. You need to convert the case of uppercase letters to lowercase letters.

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