class Solution {
    public int compress(char[] chars) {
        if(chars.length == 1) return 1;
        String s = "";
        int count = 1;
        char c = chars[0];

        for(int i=1;i<chars.length;i++){
            if(chars[i-1] == chars[i]){
                ++count;
            }
            else {
                s+=c;
                if(count>1)
                s+=String.valueOf(count);

                c=chars[i];
                count = 1;
            }
        }

        if(count>1){
            s+=c;
            s+=String.valueOf(count);
        }
        else {
            s+=c;
        }

        
        System.out.println(s);
        for(int i=0;i<s.length();i++){
            chars[i] = s.charAt(i);
        }
        return s.length();
    }
}