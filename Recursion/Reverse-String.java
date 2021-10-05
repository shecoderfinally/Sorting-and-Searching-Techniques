import java.util.*;
public class Rev
{
    static String str="";
    public static String reverse(String st,int i)
    {
        if(i<0)
        return "";
        else
        {
            str=str+st.charAt(i);
            reverse(st,i-1);
          return str;
        }
    }
    public static void main(String args[])
    {
        Scanner in = new Scanner(System.in);
        String s=in.next();
        System.out.println(reverse(s,s.length()-1));
    }
}
