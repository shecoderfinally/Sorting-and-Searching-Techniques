import java.util.*;

public class PigeonHoleSort 
{
    public static void pigeonholeSort(ArrayList<Integer> array) 
    {
        int min = Integer.MAX_VALUE;
        int max = Integer.MIN_VALUE;
        int n = array.size();


        for (int i: array) 
        {
            if (i < min)
                min = i;
            if (i > max)
                max = i;
        }

        int range = max - min + 1;
        List<ArrayList<Integer>> holes = new ArrayList<ArrayList<Integer>>();
        
        for (int i=0; i < range; i++) 
            holes.add(new ArrayList<>());
        
        for (int i:array)
            holes.get(i - min).add(i);

        int index = 0;
        for (int i=0; i < range; i++) 
        {
            int count = holes.get(i).size();
            for (int j = 0; j < count; j++) {
                array.set(index, holes.get(i).get(j));
                index++;
            }
        }
    }

    public static void main(String[] args) {
        ArrayList<Integer> array = new ArrayList<>();
        array.add(2);
        array.add(7);
        array.add(9);
        array.add(8);
        array.add(5);
        array.add(1);
        array.add(2);
        array.add(10);
        array.add(1);

        pigeonholeSort(array);
        System.out.println(array);
    }
}
