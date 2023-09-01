import java.util.Scanner;

public class example1 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Integer moreThan10 = 0;
        Integer equalTo10 = 0;
        for (Integer x = 0; x < 100; x++) {
            System.out.println("Enter a number");
            Integer number = Integer.parseInt(scanner.nextLine());
            if (number > 10) {
                moreThan10++;
            } else if (number == 10) {
                equalTo10++;
            }
        }
        System.out.println(moreThan10);
        System.out.println(equalTo10);
    }
}
