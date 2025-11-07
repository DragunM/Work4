public class StringReverser {
    public static String reverseString(String s) {
        if (s.length() <= 1) {
            return s;
        }
        return reverseString(s.substring(1)) + s.charAt(0);
    }
    
    public static void main(String[] args) {
        String text = "Hello World";
        System.out.println(reverseString(text));  // dlroW olleH
    }
}
