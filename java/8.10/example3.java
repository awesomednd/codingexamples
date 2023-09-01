import java.util.Scanner;

public class example3 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter 1 or 2");
        Integer choice = Integer.parseInt(scanner.nextLine());
        if (choice == 1) {
            System.out.println("Enter a word");
            String word = scanner.nextLine();
            for (Integer count = 0; count < word.length(); count++) {
                String character = word.substring(count, count+1);
                if (character.equals("a") || character.equals("e") || character.equals("i") || character.equals("o") || character.equals("u")) {
                    System.out.println(character);
                }
            }
        }
    }
}
