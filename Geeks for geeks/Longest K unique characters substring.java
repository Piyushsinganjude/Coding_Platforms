class Solution {
    public int longestkSubstr(String s, int k) {
        int i =0;
        int j =0;
        HashMap<Character,Integer> map1 = new HashMap<>();
        int max = -1;
        
        while(j<s.length()){
            map1.put(s.charAt(j),map1.getOrDefault(s.charAt(j),0)+1);
            
            while(map1.size()>k){
                map1.put(s.charAt(i),map1.getOrDefault(s.charAt(i),0)-1);
                
                if(map1.get(s.charAt(i))==0){
                    map1.remove(s.charAt(i));
                }
                i++;
            }
            if(map1.size()==k){
                max = Math.max(max,j-i+1);
            }
            j++;
        }
        return max;
    }
}
link = (https://practice.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1?page=1&difficulty[]=1&category[]=two-pointer-algorithm&sortBy=submissions)
