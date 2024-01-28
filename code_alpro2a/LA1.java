import java.util.Scanner;;
public class LA1{
    public static void main(String[]args) {
        int num1;
        int num2;
        int hasil;
        boolean hasil2;

        try (Scanner input = new Scanner(System.in)) {
            System.out.print("Masukkan bilangan A : ");
            num1 = input.nextInt();
            System.out.print("Masukkan bilangan B : ");
            num2 = input.nextInt();
        }
        
        hasil = num1 + num2;
        System.out.println(num1 + " + " + num2 + " = " + hasil);

        hasil = num1 - num2;
        System.out.println(num1 + " - " + num2 + " = " + hasil);
        
        hasil = num1 / num2;
        System.out.println(num1 + " : " + num2 + " = " + hasil);
        
        hasil = num1 * num2;
        System.out.println(num1 + " x " + num2 + " = " + hasil);

        hasil2 = num1 == num2;
        System.out.println("Apakah A sama dengan B? " + hasil2);

        hasil2 = num1 != num2;
        System.out.println("Apakah A tidak sama dengan B? " + hasil2);

        hasil2 = num1 > num2;
        System.out.println("Apakah A lebih dari B? " + hasil2);

        hasil2 = num1 < num2;
        System.out.println("Apakah A kurang dari B? " + hasil2);

        hasil2 = num1 >= num2;
        System.out.println("Apakah A lebih dari sama dengan B? " + hasil2);

        hasil2 = num1 <= num2;
        System.out.println("Apakah A kurang dari sama dengan B? " + hasil2);

    }
}