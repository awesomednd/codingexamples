import java.util.Scanner;

public class example3 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Integer num = 10;
        System.out.println("Enter a number");
        Integer guess = Integer.parseInt(scanner.nextLine());
        if (num == guess) {
            System.out.println("That's correct");
        } else {
            System.out.println("Incorrect");
        }
    }
}
