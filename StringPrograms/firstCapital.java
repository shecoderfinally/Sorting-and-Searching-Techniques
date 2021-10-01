//Linear search Approach

public class FirstCapital {

	public static void main(String[] args) {
		
//		 String str = "geekyMan";
			String str = "saleSman";
			char ch = firstCapital(str);
			System.out.println(ch);
			
	}
	
	static char firstCapital(String str) {
		
		for(int i=0;i<str.length();i++) {
			if( str.charAt(i) < 97) {
				return str.charAt(i);
			}
		}
	
		return 'a';
	}
	
