import java.util.Random;

public class example2 {
    public static void main(String[] args) {
        Random rand = new Random();
        Integer[] arrayData = new Integer[101];
        for (Integer y = 0; y <= 100; y++) {
            arrayData[y] = rand.nextInt(25565);
        } 
        Integer total = 0;
        for (Integer count = 0; count < 100; count++) {
            total = total + arrayData[count];
        }
        System.out.println(total);
    }
}
