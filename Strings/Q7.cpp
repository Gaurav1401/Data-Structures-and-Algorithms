// Given a string s representing a password, you need to check if the string is valid or not. 
// A valid string has the following properties:

// String must have the length greater than or equal to 10.
// String must contain at least 1 numeric character.
// String must contain at least 1 uppercase character.
// String must contain at least 1 lowercase character.
// String must contain at least 1 special character from @#$-*.

bool validate(string s)
{
   int len = s.length();
   int num = 0; // to count numerical characters
   int upper = 0; // to count uppercase characters
   int lower = 0; // to count lowercase characters
   int special = 0; // to count special characters
   
   for (int i=0; i<s.length(); i++)
   {
       if((s[i] >= 48) && (s[i] <= 57))
       {
           num++;
       }
       
       else if((s[i] >= 97) && (s[i] <= 122))
       {
           lower++;
       }
       
       else if((s[i] >= 65) && (s[i] <= 90))
       {
           upper++;
       }
       
       else
       {
           special++;
       }
   }
   
   if ((len>=10) && (num>0) && (lower>0) && (upper>0) && (special>0))
   {
       return true; 
    }
    else
    {
        return false;
    }
}