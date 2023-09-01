import java.util.Scanner;

public class example8 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter a message");
        String stringInput = scanner.nextLine();
        String newString = stringInput.substring(stringInput.length() - 3, stringInput.length());
        System.out.println(newString);
    }
}
