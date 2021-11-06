class Solution {
public:
    bool checkInclusion(string s1, string s2) {
          int s1sz = s1.size(), s2sz = s2.size() ;
        unordered_map<char, int> umap ; 
        int i = 0, j = 0, k = s1sz ;
        
        for(char c : s1){ umap[c]++ ;}
        int count = umap.size() ; 
        
        
        while(j<s2sz)
        {
            if(umap.count(s2[j])>0)
            {
                umap[s2[j]]-- ;
                if(umap[s2[j]] == 0){count-- ;}
            }
            
            if(j-i+1 < k){ j++ ;}
            else if(j-i+1 == k) 
            {
                
                if(count == 0){return true ;}
                
                if(umap.find(s2[i]) != umap.end())
                {
                    umap[s2[i]]++ ;
                    if(umap[s2[i]] == 1){count++ ;}
                }
                i++ ; j++ ;
            }
                
        }
        return false ;
    }
};