public class indiaMap_pattern{
    public static void main(String[] arr){
        int a=10,b=0,c=10;
        String s1 ="TFy!QJu ROo TNn(ROo)SLq SLq ULo+UHs UJq TNn*RPn/QPbEWS_JSWQAIJO^NBELPeHBFHT}TnALVlBLOFAkHFOuFETpHCStHAUFAgcEAelclcn^r^r\\tZvYxXyT|S~Pn SPm SOn TNn ULo0ULo#ULo-WHq!WFs XDt!";
        a=s1.charAt(b);
        while(a!=0){
            if(b<170){
                a=s1.charAt(b);
                b++;
                while(a-- >64){
                   
                    if(++c=='Z'){
                        c/=9;
                        System.out.println((char)(c));
                    }
                    else{
                        System.out.print((char)(33^(b & 0x01)));
                    }
                }
                
            }
            else
                break;
        } 
    }
}
