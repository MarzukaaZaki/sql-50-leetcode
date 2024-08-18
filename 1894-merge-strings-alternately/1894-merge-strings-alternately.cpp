class Solution {
public:
    string mergeAlternately(string word1, string word2) {

        string big, small, newString;
        if(word1.size()>= word2.size()){
            big = word1;
            small = word2;
        }
        else{
            big = word2;
            small = word1;
        }

        for(int i = 0; i<small.size(); i++){
            newString+=word1[i]; newString+=word2[i];
        }
        
        for(int i = small.size(); i<big.size(); i++){
           newString+=big[i];
        }

        return newString;



        
    }
};