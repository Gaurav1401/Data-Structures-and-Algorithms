// You are given a string s. You need to convert the case of lowercase letter to uppercase letters.

string caseConversion(string str){
    
    for (int i=0; i<str.length(); i++)
    {
        if((str[i] >= 97) && (str[i] <= 122)) // considering lowercase letters only
            str[i] -= 32;
        else // If any uppercase letter comes, ignore that
            continue;
    }
    
    return str;
}