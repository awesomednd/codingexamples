import java.util.Scanner;

public class example1 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Integer count = 0;
        String continueInput = "Yes";
        while(continueInput.equals("Yes")) {
            System.out.println("Do you want to continue");
            continueInput = scanner.nextLine();
            count++;
        }
    }
}
