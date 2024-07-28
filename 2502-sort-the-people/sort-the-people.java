class Solution {
    public String[] sortPeople(String[] names, int[] heights) {
        List<Integer> nameList = new ArrayList<>();
        for(int i=0;i<names.length;i++){
            nameList.add(i);
        }

        Collections.sort(nameList,(a,b)->-(heights[a]-heights[b]));

        return nameList.stream().map(element->names[element]).toArray(String[]::new);
    }
}