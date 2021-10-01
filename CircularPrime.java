class CircularPrime
{
    public static boolean isPrime(int n)
    {
        for(int x = 2;x<=n/2;x++)
        {
            if(n%x==0)
            {
                return false;
            }
        }
        return true;
    }
    public static boolean isCircularPrime(int n)
    {
        boolean cp=true;
        int m=1,t=n;
        while(t>=10)
        {
            t=t/10;
            m=m*10;
        }
        t=n;
        while(t!=0)
        {
            int d=t%m;
            t=t%m;
            m=m/10;
            t=t*10+d;
            if(isPrime(t)==false)
            {
                cp=false;
                break;
            }
        }
        if(cp)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
