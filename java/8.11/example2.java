import java.util.Scanner;

public class example2 {
    public static void main(String[] args) {
        multiply();
    }

    private static void multiply() {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter a number");
        Integer num1 = Integer.parseInt(scanner.nextLine());
        System.out.println("Enter a seccond number");
        Integer num2 = Integer.parseInt(scanner.nextLine());
        Integer total = num1 * num2;
        System.out.println(total);
    }
}
