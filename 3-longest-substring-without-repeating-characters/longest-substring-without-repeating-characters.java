class Solution {
    public int lengthOfLongestSubstring(String s) {
        int longestSubstring = 0;
        HashSet<Character> chars = new HashSet<>();

        int startIndex = 0;
        // abcaabb
        //int endIndex = s.length() - 1;
// startIndex = 0, lastIndex = 0;
        for(int i=0;i<s.length();i++){
            while(chars.contains(s.charAt(i))){
                chars.remove(s.charAt(startIndex));
                ++startIndex;
            }

            chars.add(s.charAt(i));
            longestSubstring = Math.max(longestSubstring,i-startIndex + 1);

        }

        return longestSubstring;
    }
}