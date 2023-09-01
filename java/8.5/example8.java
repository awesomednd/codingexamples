import java.util.Scanner;

public class example8 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter the mark for test 1");
        Integer mark1 = Integer.parseInt(scanner.nextLine());
        System.out.println("Enter the mark for test 2");
        Integer mark2 = Integer.parseInt(scanner.nextLine());
        if (mark1 >= 90 && mark2 >= 90) {
            System.out.println("Well done you got top marks on both tests");
        } else if (mark1 >= 90 || mark2 >= 90) {
            System.out.println("Well odne you got top marks on one test");
        } else {
            System.out.println("You didn't quite get top marks on the tests, try again next time");
        }
    }
}
