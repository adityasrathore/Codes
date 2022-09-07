        int n1=s.length();
        int n2=t.length();
        if(n1!=n2)
            return false;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s!=t)
            return false;
        return true;
