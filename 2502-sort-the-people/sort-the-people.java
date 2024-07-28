class Solution {
    public String[] sortPeople(String[] names, int[] heights) {
        List<Integer> nameIndexList = new ArrayList<>();
        for(int i=0;i<names.length;i++){
            nameIndexList.add(i);
        }

        return nameIndexList.stream().
         sorted((a,b)->-(heights[a]-heights[b])).
         map(element->names[element]).
         toArray(String[]::new);
    }
}