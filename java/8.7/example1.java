import java.util.Scanner;

public class example1 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Integer total = 0;
        for (Integer counter = 0; counter <= 10; counter++) {
            System.out.println("Enter a number");
            total = total + Integer.parseInt(scanner.nextLine());
        }
    }
}
