       int n=paths.size();
        unordered_map <string,int> mp;
        for(int i=0;i<n;i++)
            mp[paths[i][0]]++;
        
        for(int i=0;i<n;i++)
            if(mp[paths[i][1]]<1)
                return paths[i][1];
        
        return "";

        unordered_map <string,int> mp;
        for(int i=0;i<paths.size();i++)
            for(int j=0;j<paths[i].size();j++)
                mp[paths[i][j]]++;
        
        vector <string>  v;
        for(auto i:mp)
            if(i.second == 1)
                v.push_back(i.first);
        
        int idx=0;
        for(int i=0;i<paths.size();i++)
            for(int j=0;j<paths[i].size();j++)
                if(v[0]==paths[i][j]){
                    idx=j;
                    break;
                }
        
        if(idx%2==0)
            return v[1];
        else
            return v[0];
