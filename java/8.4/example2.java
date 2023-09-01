import java.util.Scanner;

public class example2 {
    public static void main(String[] args) {
        Integer X  = 1;
        Integer Y  = 2;
        Integer Z  = 3;
        Integer total = X + Y + Z;
        System.out.println("Enter the first value");
        Scanner scanner = new Scanner(System.in);
        String value1 = scanner.nextLine();
        System.out.println(total);
        System.out.println(value1);
    }
}
