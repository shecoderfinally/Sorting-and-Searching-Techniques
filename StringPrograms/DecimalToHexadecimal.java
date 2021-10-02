class DecimalToHexadecimal
{
    public static void toHexadecimal(int n)
    {
        if(n>15)
        {
            toHexadecimal(n/16);
        }
        if(n%16>=10)
        {
            System.out.print((char)(n%16+55));
        }
        else
        {
            System.out.print(n%16);
        }
    }
    
}
