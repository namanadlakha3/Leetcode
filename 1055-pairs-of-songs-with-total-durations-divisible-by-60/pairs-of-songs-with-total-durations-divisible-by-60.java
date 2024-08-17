class Solution {
    public int numPairsDivisibleBy60(int[] time) {
        int ans = 0;
        HashMap<Integer,Integer>mp = new HashMap<>();
        for(int i=0;i<time.length;i++){
            int num = time[i]%60;
          
            if(num == 0){
                ans+=mp.getOrDefault(num, 0);
            }
            else {
              ans+=mp.getOrDefault(60-num, 0);
            }

            mp.put(num,mp.getOrDefault(num, 0)+1);
        }
        return ans;
    }
}