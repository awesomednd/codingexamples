import java.util.Scanner;

public class example5 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String inputValue = "Yes";
        while (inputValue.equals("Yes")) {
            System.out.println("Do you want to continue");
            inputValue = scanner.nextLine();
        }
    }
}
