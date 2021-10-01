class RightTriangle
{
    public static void main(String[]args)
    {
        for(int x = 3 ; x<=7 ; x++)
        {
            for(int y = x ; y<=6 ; y++)
            {
                System.out.print(" ");
            }
            for(int y = 3 ; y<=x ; y++)
            {
                System.out.print(y);
            }
            System.out.println();
        }
    }
}
