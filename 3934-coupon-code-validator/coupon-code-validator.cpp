class Solution {
public:
    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        vector<string> elec;
        vector<string> groc;
        vector<string> pharm;
        vector<string> rest;

        int n = code.size();
        for(int i=0; i<n; i++) {
            if(code[i].size() > 0) {
                bool isCode = true;
                for(int j=0; j<code[i].size(); j++) {
                    if(!((code[i][j]>='a' && code[i][j] <='z') || (code[i][j] >= 'A' && code[i][j] <= 'Z') || (code[i][j] >= '0' && code[i][j] <= '9') || code[i][j] == '_')) {
                        isCode = false;
                    }
                }
                if(!isCode)
                    continue;
                
                if(!isActive[i])
                    continue;
                
                if(businessLine[i] == "electronics")
                    elec.push_back(code[i]);
                
                else if(businessLine[i] == "grocery")
                    groc.push_back(code[i]);
                
                else if(businessLine[i] == "pharmacy")
                    pharm.push_back(code[i]);
                
                else if(businessLine[i] == "restaurant")
                    rest.push_back(code[i]);
                
            }
        }

        sort(elec.begin(), elec.end());
        sort(groc.begin(), groc.end());
        sort(pharm.begin(), pharm.end());
        sort(rest.begin(), rest.end());

        vector<string> res;
        res.insert(res.end(), elec.begin(), elec.end());
        res.insert(res.end(), groc.begin(), groc.end());
        res.insert(res.end(), pharm.begin(), pharm.end());
        res.insert(res.end(), rest.begin(), rest.end());

        return res;
    }
};