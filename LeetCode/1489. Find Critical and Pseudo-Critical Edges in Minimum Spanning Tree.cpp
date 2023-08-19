//  TC Watch https://www.youtube.com/watch?v=zl-rLRPpl_s
// Imp Krus + MST + Union 

class Solution {
public:
    vector<vector<int>> findCriticalAndPseudoCriticalEdges(int n, vector<vector<int>>& eds) {
        vector<vector<int>> edges;
        edges.reserve(eds.size());
        copy(eds.begin(), eds.end(), back_inserter(edges));
        for (int i = 0; i<edges.size(); i++){
            edges[i].push_back(i);
        }
        sort(edges.begin(), edges.end(), [](vector<int>& a, vector<int>& b){
            return a[2]<b[2];
        });
        int nn = edges.size();
        int base = MST(edges, -1, nn, n);
        vector<vector<int>> res;
        vector<int> cr, pcr;
        for (int i = 0; i<nn; i++){
          int newVal = MST(edges, i, nn, n);
          if (newVal > base) cr.push_back(edges[i][3]);
          else{
              newVal = MST_p(edges, i, nn, n);
              if (newVal == base) pcr.push_back(edges[i][3]);
          }
        }
        res.push_back(cr);
        res.push_back(pcr);
        return res;
    }
    int MST(vector<vector<int>>& es, int i, int n, int nn){
        vector<int> vec(nn, -1);
        int res = 0;
        int e_n = 0;
        for (int j = 0; j<n; j++){
            if (j == i) continue;
            vector<int> vv = es[j];
            if (find(vec, vv[0]) == find(vec, vv[1])){
                continue;
            }
            res += vv[2];
            Union(vec, vv[0], vv[1]);
            e_n++;
        }
        if (e_n < nn-1) return INT_MAX;
        return res;
    }
    int MST_p(vector<vector<int>>& es, int i, int n, int nn){
        vector<int> vec(nn, -1);
        int res = es[i][2];
        Union(vec, es[i][0], es[i][1]);
        for (int j = 0; j<n; j++){
            if (j == i) continue;
            vector<int> vv = es[j];
            if (find(vec, vv[0]) == find(vec, vv[1])){
                continue;
            }
            res += vv[2];
            Union(vec, vv[0], vv[1]);
        }
        return res;
    }
    int find(vector<int>& vec, int i)  
    {  
        if (vec[i] == -1)  
            return i;  
        return find(vec, vec[i]);  
    }   
    void Union(vector<int>& vec, int x, int y)  
    {  
        int xs = find(vec, x);  
        int ys = find(vec, y);  
        if(xs != ys) 
        {  
            vec[xs] = ys;  
        }  
    }  
};
