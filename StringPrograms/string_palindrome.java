public class Palindrome {

	public static void main(String[] args) {
		
		String s = "Saas";
		System.out.println(isPalindrome(s));
	}
	
	static boolean isPalindrome(String s) {
		
		s = s.toLowerCase();
		
		if(s== null || s.length()==0) {
			return true;
		}
		
		for (int i = 0; i < s.length(); i++) {
			
			char start = s.charAt(i);
			char end = s.charAt(s.length()-1-i);
			
			if(start!=end) {
				return false;
			}
			
		}
		
		return true;

	}
	

}
