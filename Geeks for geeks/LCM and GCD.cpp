vector<long long>vec;
        long long val = __gcd(A,B);
        long long lcm = (A*B)/val;
        vec.push_back(lcm);
        vec.push_back(val);
        return vec;
Link = (https://practice.geeksforgeeks.org/problems/lcm-and-gcd4516/1)
