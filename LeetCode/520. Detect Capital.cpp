class Solution {
public:
    bool detectCapitalUse(string word) {
        int n=word.size();
        for(int i=1;i<n;i++){
            if(word[0]>='a' && word[0]<='z'){  //First Letter is Small (Checking)
                if(word[i]>='A' && word[i]<='Z') //If any other letter is Capital return False 
                    return false;
            }
            if(word[0]>='A' && word[0]<='Z'){  // First Letter is Capital (Checking)
                if(i<n-1 && (word[i]>='A' && word[i]<='Z') && (word[i+1]>='a' && word[i+1]<='z'))
                    return false; // Capital and Small Mixture
                if(i<n-1 && (word[i]>='a' && word[i]<='z') && (word[i+1]>='A' && word[i+1]<='Z'))
                    return false;
            }
        }//If the word doesn't fail in any above conditions then it has completely satisfied the above conditions.
        return true;
    }
};
