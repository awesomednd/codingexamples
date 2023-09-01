import java.util.Scanner;

public class example9 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter the first number");
        Integer number1 = Integer.parseInt(scanner.nextLine());
        System.out.println("Enter the first second");
        Integer number2 = Integer.parseInt(scanner.nextLine());
        System.out.println("Enter the first third");
        Integer number3 = Integer.parseInt(scanner.nextLine());
        if (number1 > number2 && number1 > number3) {
            System.out.println(number1);
        } else if (number2 > number3) {
            System.out.println(number2);
        } else {
            System.out.println(number3);
        }
    }
}
