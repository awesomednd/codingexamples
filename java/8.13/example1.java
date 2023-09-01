import java.util.Random;

public class example1 {
    public static void main(String[] args) {
        Random rand = new Random();
        Integer[] arrayData = new Integer[11];
        for (Integer y = 0; y <= 10; y++) {
            arrayData[y] = rand.nextInt(25565);
        } 
        //output the first 10 elements in the array
        for (Integer count = 0; count < 11; count++) {
            System.out.println(arrayData[count]);
        }
    }
}
