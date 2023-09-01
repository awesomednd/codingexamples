import java.util.Random;

public class example2 {
    public static void main(String[] args) {
        Random rand = new Random();
        Integer[] arrayData = new Integer[101];
        for (Integer y = 0; y <= 100; y++) {
            arrayData[y] = rand.nextInt(25565);
        } 
        Integer number = 0;
        Integer count = 0;
        Integer dataInArray = 0;
        while (number < 10) {
            dataInArray = arrayData[count];
            count++;
            if (dataInArray >= 100) {
                number++;
            }
        }
        System.out.println(number);
    }
}
