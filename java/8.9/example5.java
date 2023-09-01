import java.util.Scanner;

public class example5 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter a string");
        String inputString = scanner.nextLine();
        Integer stringLength = inputString.length();
        System.out.println(inputString +  " is " + stringLength + " characters long");
    }
}
