import java.util.Scanner;

public class act2{
    public static void main(String[]args){
        Scanner input = new Scanner(System.in);

        int jumlahMotor, total, diskon;

        System.out.println("====SELAMAT DATANG DI DEALER KOHAR SYARIAH====");
        System.out.println("MERK MOTOR: ");
        System.out.println("1. Aerox Rp 20.000.000");
        System.out.println("2. MIO Rp 12.000.000");
        System.out.println("3. SUPRA X Rp 14.000.000");
        System.out.println("4. BEAT Rp 15.000.000");
        
        System.out.print("Bayar cash? (y/n)");
        String cash = input.nextLine();

        System.out.print("Pilih merk motor anda: ");
        int motor = input.nextInt();

        System.out.print("Beli berapa unit: ");
        jumlahMotor = input.nextInt();

        switch (motor) {
            case 1:
                int hargaAerox = 20000000;
                total = hargaAerox * jumlahMotor;

                if (cash.equalsIgnoreCase("y")) {
                    if (total >= 100000000) {
                        diskon = 20000000;
                        total -= diskon;
                    } else if (total >= 70000000) {
                        diskon = 10000000;
                        total -= diskon;
                    } else if (total >= 50000000) {
                        diskon = 5000000;
                        total -= diskon;
                    } else {
                        diskon = 0;
                    }
                } else if (cash.equalsIgnoreCase("n")) {
                    diskon = 0;
                } else {
                    System.out.println("TANYA PEMBAYARAN MENGGUNAKAN APA!!");
                    System.out.println("RUNNING ULANG!");
                    break;
                }
                System.out.println("\n=============================");
                System.out.println("Anda memesan Aerox sebanyak " + jumlahMotor + " unit");
                System.out.println("HARGANYA Rp." + total + " YA!");
                System.out.println("Motor anda langsung diantar ke rumah ya!");
                break;

            case 2:
                int hargaMio = 12000000;
                total = hargaMio * jumlahMotor;

                if (cash.equalsIgnoreCase("y")) {
                    if (total >= 100000000) {
                        diskon = 20000000;
                        total -= diskon;
                    } else if (total >= 70000000) {
                        diskon = 10000000;
                        total -= diskon;
                    } else if (total >= 50000000) {
                        diskon = 5000000;
                        total -= diskon;
                    } else {
                        diskon = 0;
                    }
                } else if (cash.equalsIgnoreCase("n")) {
                    diskon = 0;
                } else {
                    System.out.println("TANYA PEMBAYARAN MENGGUNAKAN APA!!");
                    System.out.println("RUNNING ULANG!");
                    break;
                }
                System.out.println("\n=============================");
                System.out.println("Anda memesan Mio sebanyak " + jumlahMotor + " unit");
                System.out.println("HARGANYA Rp." + total + " YA!");
                System.out.println("Silahkan ditunggu ya");
                break;

            case 3:
                int hargaSupra = 14000000;
                total = hargaSupra * jumlahMotor;

                if (cash.equalsIgnoreCase("y")) {
                    if (total >= 100000000) {
                        diskon = 20000000;
                        total -= diskon;
                    } else if (total >= 70000000) {
                        diskon = 10000000;
                        total -= diskon;
                    } else if (total >= 50000000) {
                        diskon = 5000000;
                        total -= diskon;
                    } else {
                        diskon = 0;
                    }
                } else if (cash.equalsIgnoreCase("n")) {
                    diskon = 0;
                } else {
                    System.out.println("TANYA PEMBAYARAN MENGGUNAKAN APA!!");
                    System.out.println("RUNNING ULANG!");
                    break;
                }
                System.out.println("\n=============================");
                System.out.println("Anda memesan Supra X sebanyak " + jumlahMotor + " unit");
                System.out.println("HARGANYA Rp." + total + " YA!");
                System.out.println("Silahkan ditunggu ya");
                break;

            case 4:
                int hargaBeat = 15000000;
                total = hargaBeat * jumlahMotor;

                if (cash.equalsIgnoreCase("y")) {
                    if (total >= 100000000) {
                        diskon = 20000000;
                        total -= diskon;
                    } else if (total >= 70000000) {
                        diskon = 10000000;
                        total -= diskon;
                    } else if (total >= 50000000) {
                        diskon = 5000000;
                        total -= diskon;
                    } else {
                        diskon = 0;
                    }
                } else if (cash.equalsIgnoreCase("n")) {
                    diskon = 0;
                } else {
                    System.out.println("TANYA PEMBAYARAN MENGGUNAKAN APA!!");
                    System.out.println("RUNNING ULANG!");
                    break;
                }
                System.out.println("\n=============================");
                System.out.println("Anda memesan Beat sebanyak " + jumlahMotor + " unit");
                System.out.println("HARGANYA Rp." + total + " YA!");
                System.out.println("Silahkan ditunggu ya");
                break;
            
            default:
            System.out.println("MASUKIN INPUT YG BENER !");
            break;
        } 
    }
    
}