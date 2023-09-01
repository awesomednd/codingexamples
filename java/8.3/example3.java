import java.util.Scanner;

public class example3 {
    public static void main(String[] args) {
        Integer number1 = 5;
        System.out.println("Enter a number");
        Scanner scanner = new Scanner(System.in);
        Integer number2 = Integer.parseInt(scanner.nextLine());
        Integer result = number1 * number2;
        System.out.println(result);
    }
}
