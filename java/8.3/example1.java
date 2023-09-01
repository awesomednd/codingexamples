import java.util.Scanner;

public class example1 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter the first number");
        Integer num1 = Integer.parseInt(scanner.nextLine());
        System.out.println("Enter the seccond number");
        Integer num2 = Integer.parseInt(scanner.nextLine());
        Integer total = num1 + num2;
        System.out.println(total);
    }
}
