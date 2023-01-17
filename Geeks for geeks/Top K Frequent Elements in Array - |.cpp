cpp solution:-
map<int,int> mp;
        for(auto x : nums){
            mp[x]++;
        }
        vector<pair<int,int> > vp;
        vector<int> ans;
        for(auto x : mp)
        {
            vp.push_back({x.second,x.first});
        }
        sort(vp.begin(),vp.end());
        reverse(vp.begin(),vp.end());
        for(auto x : vp)
        {
            ans.push_back(x.second);
            if(ans.size() == k) break;
        }
        return ans;
    }
Link - (https://practice.geeksforgeeks.org/problems/top-k-frequent-elements-in-array/1?page=2&difficulty[]=0&category[]=Sorting&sortBy=submissions)
