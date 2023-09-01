import java.util.Random;

public class example4 {
    public static void main(String[] args) {
        System.out.println(totalValues());
    }

    private static Integer totalValues() {
        Random rand = new Random();
        Integer[] arrayData = new Integer[50];
        for (Integer y = 0; y < 50; y++) {
            arrayData[y] = rand.nextInt(25565);
        } 
        Integer total = 0;
        for (Integer x = 0; x < 50; x++) {
            total = total + arrayData[x];
        }
        return total;
    }
}
