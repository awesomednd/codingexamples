import java.util.Random;

public class example2 {
    public static void main(String[] args) {
        Random rand = new Random();
        Integer randomNumber = rand.nextInt(1000) + 1;
        System.out.println(randomNumber);
    }
}
