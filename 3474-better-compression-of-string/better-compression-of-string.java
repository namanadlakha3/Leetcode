class Solution {
    public String betterCompression(String compressed) {
        int num = 0;
        Character ch = '0';
        HashMap<Character,Integer>mp = new HashMap<>();

        for(int i=0;i<compressed.length();i++){
            Character c = compressed.charAt(i);
            if(Character.isDigit(c)){
                num = num*10 + c - '0';
            }
            else {
                mp.put(ch,mp.getOrDefault(ch, 0)+num);
                ch = c;
                num = 0;
            }
        }
        mp.put(ch,mp.getOrDefault(ch, 0)+num);
        String ans = "";
        for(char i = 'a';i<='z';i++){
         if(mp.containsKey(i)){
            ans+= i + String.valueOf(mp.get(i));
         }
        }

        return ans;
    }
}