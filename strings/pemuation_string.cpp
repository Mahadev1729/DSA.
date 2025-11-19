class Solution {
public:

    bool isFreqSame(vector<int>freq1,vector<int>freq2){
        for(int i=0;i<26;i++){
            if(freq1[i]!=freq2[i]){
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        vector<int>freq(26,0);
        for(int i=0;i<s1.size();i++){
            freq[s1[i]-'a']++;
        }
        
        int windowSize=s1.length();

        for(int i=0;i<s2.length();i++){
            int windIndx=0,indx=i;
            vector<int>windowFreq(26,0);
            while(windIndx<windowSize && indx<s2.length()){
                windowFreq[s2[indx]-'a']++;
                windIndx++;indx++;
            }

            if(isFreqSame(freq,windowFreq)){
                return true;
            }
        }
       return false;


    }
};
