// Recursive Approach
public class FirstCapital {
	
	public static void main(String[] args) {
		
//		String str = "geekyMan";
		String str = "alexAnder";
		int n=0;
		System.out.println(firstCapital(str,n));		
	}
	
	static char firstCapital(String str,int n) {
		
			if(Character.isUpperCase(str.charAt(n))) {
				return str.charAt(n);
			}
			
		return firstCapital(str,n+1);	
	}
	
	
}
