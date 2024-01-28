import java.util.Scanner;

public class Fiboeuy {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Masukkan panjang angka Fibonaccinya: ");
        int n = input.nextInt();
        int x=0;
        int y=1;
        int sum;

        for(int i=0; i<n; i++) {
            System.out.print(x +" ");
            sum = x + y;
            x = y;
            y = sum;
        
        }
    }
}