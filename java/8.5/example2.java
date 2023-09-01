import java.util.Scanner;

public class example2 {
    public static void main(String[] args) {
        Integer storedValue = 100;
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter a number");
        Integer valueInput = Integer.parseInt(scanner.nextLine());
        if (valueInput > storedValue) {
            System.out.println("It is more than 100");
        }
    }
}
