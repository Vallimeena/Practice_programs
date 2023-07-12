#include <stdio.h>
#include <string.h>
int lengthOfLastWord(char * s){
int lengthOfLastWord = 0;
int len = strlen(s);
bool char_encountered = false;
int i = len - 1;
printf("%s ends with %c",s,s[len-1]);
while(i >= 0)
{
    if(s[i]!= ' ')
    {
        lengthOfLastWord++;
        char_encountered = true;
        i--;
    }
    else
    {
        if(char_encountered)
            return lengthOfLastWord;
        i--;
        continue;
    }
}
printf("The length of last word is:%d",lengthOfLastWord);
return lengthOfLastWord;
}