import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class RomanToInteger {
    public static void main(String[] args) {
        Scanner kb = new Scanner(System.in);
        System.out.print("Enter any Roman Number: ");
        String roman=kb.next();
        
        int num=romanToInt(roman);
        
        System.out.println("Integer of Roman "+roman+" is : "+num);
    }
    
    public static int romanToInt(String s) {
        Map<Character,Integer>map = new HashMap<>();
        
        map.put('I',1);
        map.put('V',5);
        map.put('X',10);
        map.put('L',50);
        map.put('C',100);
        map.put('D',500);
        map.put('M',1000);
        
        int sum=0;
        sum+=map.get(s.charAt(0));
        
        for(int i=1; i<s.length(); i++){
            int curr=map.get(s.charAt(i));
            int prev=map.get(s.charAt(i-1));
            if(prev<curr)
                sum=sum-prev*2;
            sum+=curr;
        }
        return sum;    
    }
}