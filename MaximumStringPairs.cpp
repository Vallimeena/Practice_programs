#include <iostream>
class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int numOfStringPairs = 0;
        string rev_word;

        //base case of words size 1
        if(words.size() == 1) return 0;

        for(int i=0;i < words.size();i++)
        {
            for(int j = i+1;j < words.size();j++)
            {
                if(words[i] != words[j])
                {
                    rev_word = string(words[j].rbegin(),words[j].rend());
                    if(strcmp(words[i].c_str(),rev_word.c_str())==0)
                    {
                        numOfStringPairs++;
                    }
                }
            }
        }
        return numOfStringPairs;
    }
};


/* 0ms Submission */
#if 0
class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int ans=0;
        for(int i=0;i<words.size();i++){
            for(int j=i+1;j<words.size();j++){
                // vector<string> temp=words[j];
                // temp.reverse();
                if(words[j][1]==words[i][0]&&words[j][0]==words[i][1]) ans++;
            }
        }
        return ans;
    }
};
#endif