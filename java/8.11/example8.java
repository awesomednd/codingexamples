import java.util.Scanner;

public class example8 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter the samllest number");
        Integer firstNumber = Integer.parseInt(scanner.nextLine());
        System.out.println("Enter the biggest number");
        Integer secondNumber = Integer.parseInt(scanner.nextLine());
        outputNumbers(firstNumber, secondNumber);
    }

    public static void outputNumbers(Integer num1, Integer num2) {
        for (Integer count = num1; count <= num2; count++) {
            System.out.println(count);
        }
    }
}
