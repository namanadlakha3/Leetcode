class Solution {
    public String mergeAlternately(String word1, String word2) {
        String word3="";
        int size1= word1.length(), size2 = word2.length();
        int i=0,j=0;

        while(i<size1 || j<size2) {
            if(i<size1){
                word3 = word3 + word1.charAt(i);
                i++;
            }
            if(j<size2){
                word3 = word3 + word2.charAt(j);
                j++;
            }

        }

        
        return word3;
    }
}