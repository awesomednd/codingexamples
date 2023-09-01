import java.util.Scanner;

public class example3 {
    public static void main(String[] args) {
        System.out.println(multiply());
    }

    private static Integer multiply() {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter a number");
        Integer num1 = Integer.parseInt(scanner.nextLine());
        System.out.println("Enter a seccond number");
        Integer num2 = Integer.parseInt(scanner.nextLine());
        return(num1 * num2);
    }
}
