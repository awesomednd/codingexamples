import java.util.Scanner;

public class example2 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter a number");
        Integer num1 = Integer.parseInt(scanner.nextLine());
        System.out.println("Enter a number");
        Integer num2 = Integer.parseInt(scanner.nextLine());
        //find and output the largest number
        if (num1 > num2) {
            System.out.println(num1);
        } else {
            System.out.println(num2);
        }
    }
}
