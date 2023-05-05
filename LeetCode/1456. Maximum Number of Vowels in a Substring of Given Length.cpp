// class Solution {
// public:
//     int maxVowels(string s, int k) {
//         int n=s.size();
//         int v[26]={false};
//         v['a'-'a']=true;
//         v['e'-'a']=true;
//         v['i'-'a']=true;
//         v['o'-'a']=true;
//         v['u'-'a']=true;
//         int left=0;
//         int right=0;
//         int count=0;
//         int temp=0;
//         for(int i=0;i<k;++i){
//             if(v[s[i]-'a'])
//                 count++;
//             right++;
//         }
//         // right--;
//         cout<<count<<endl;
//         for(int i=right;i<n;++i){
//             if(v[s[i]-'a'])
//                 temp++;
//             else
//                 temp--;
//             count = max(count,temp);

//         }
//         return count;
        
//     }
// };
class Solution {
public:
    int maxVowels(string s, int k) {
        
        // Store current count of vowels in currCount
        // and maximum currCount occurred in ans
        int currCount = 0;
        int ans = 0;
        
        // An array to mark all the vowels' position to true
        // for checking whether the char is vowel or not
        bool vowels[26] = {false};
        vowels[0] = vowels[4] = vowels[8] = vowels[14] = vowels[20] = true;
        
        // Sliding window implementation
        for (int i=0; i < s.length(); i++) {
            
            // if any vowel is removed from left-> decrement
            if (i >= k and vowels[s[i-k]-'a']) {
                currCount -= 1;
            }
            
            // if any vowel is inserted from right-> increment
            if (vowels[s[i]-'a']) {
                currCount += 1;
            }
            
            // Store maximum occurence of currCount in ans
            ans = max (ans, currCount);
        }
        
        return ans ;
    }
};
