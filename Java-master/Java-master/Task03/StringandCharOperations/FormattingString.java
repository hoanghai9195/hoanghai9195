package StringandCharOperations;

public class FormattingString {
    public static void main (String[] args){
        System.out.printf("Hi, %d, %.1f%n", 11, 22.22);
        String str = String.format("%.1f", 1.234);
    }
}
