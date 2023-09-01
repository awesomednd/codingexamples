import java.util.Scanner;

public class example7 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter your age");
        Integer age = Integer.parseInt(scanner.nextLine());
        if (age < 14) {
            System.out.println("You are not old enough");
        } else if (age < 16) {
            System.out.println("You need an adult present");
        }
    }
}
