class Solution {
    private int numVal(char c){
        if(c=='I') return 1;
        else if(c=='V') return 5;
        else if(c=='X') return 10;
        else if(c=='L') return 50;
        else if(c=='C') return 100;
        else if(c=='D') return 500;
        else if(c=='M') return 1000;
        return 0;
    }
    public int romanToInt(String s) {
        char c = s.charAt(s.length()-1);
        int num = numVal(c);
        for(int i=s.length()-2;i>=0;i--){
            char current = s.charAt(i);
            int val = numVal(current);

            if((c=='V' || c=='X') && current =='I')num-=1;
            else if((c=='L' || c=='C') && current =='X') num-=10;
            else if((c=='D' || c=='M') && current =='C') num-=100;
            else
            num+=val;
            c = current;
            System.out.println(num);
        }

        return num;
    }
}