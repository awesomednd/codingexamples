import java.util.Scanner;

public class example7 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Integer number = 5;
        Boolean guessed = false;
        while (guessed == false) {
            System.out.println("Guess the number");
            Integer guess = Integer.parseInt(scanner.nextLine());
            if (guess == number) {
                guessed = true;
            }
        }
        System.out.println("You gussed correct");
    }
}
