import java.util.Scanner;

public class example7 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter a message");
        String stringInput = scanner.nextLine();
        for (Integer count = 0; count < stringInput.length(); count++) {
            String character = stringInput.substring(count, count+1);
            System.out.println(character);
        }
    }
}
