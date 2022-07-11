for(int i=0;i<s.length();i++){
        if(s[i]>=65 && s[i]<=90){
            // s[i]=65+(((s[i]-65)+k)%26);
            int x=s[i]-65;
            if(x+k>=26){
                x=(x+k)%26;
                s[i]=65+x; 
            }
            else{
                s[i]=s[i]+k;
            }
        }
        if(s[i]>=97 && s[i]<=122){
            // s[i]=97+(((s[i]-97)+k)%26);
            int x=s[i]-97;
            if(x+k>=26){
                x=(x+k)%26;
                s[i]=97+x; 
            }
            else{
                s[i]=s[i]+k;
            }
        }        
    }
    return s;
