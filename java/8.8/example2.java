import java.util.Random;

public class example2 {
    public static void main(String[] args) {
        Random rand = new Random();
        Integer[] arrayData = new Integer[101];
        for (Integer y = 0; y <= 100; y++) {
            arrayData[y] = rand.nextInt(25565);
        } 
        Integer count = 0;
        for (Integer x = 0; x < 100; x++) {
            if (arrayData[x] > 50) {
                count++;
            }
        }
        System.out.println(count);
    }
}
