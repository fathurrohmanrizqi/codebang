import java.util.Scanner;

public class Ganjil {
    public static void main (String[]args){
        Scanner input = new Scanner(System.in);

        System.out.print("Masukkan batas bilangan ganjil: ");
        int a = input.nextInt();
        
        System.out.print("Masukkan batas bilangan genap: ");
        int b = input.nextInt();

        for (int i = 1; i < a; i+=2) {
            System.out.print(i + " ");
        }

        System.out.println();

        for (int j = 2; j < b; j+=2) {
            System.out.print(j + " ");
        }
    }
    
}
