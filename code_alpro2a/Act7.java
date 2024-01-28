import java.io.*;
import java.util.*;

public class Act7 {
    public static void main(String[] args) {
        MyFile fileku = new MyFile();
        Scanner input = new Scanner(System.in);

        System.out.print("Nama filenua mau apa? ");
        String namaFile = input.nextLine();

        String path = "D:\\punya iki\\kuli-ahh\\lab ti\\alpro2a\\pertemuan7";
        File f = new File(path, namaFile);

        fileku.MakeFile(f);

        boolean jalan = true;
        while(jalan) {
            System.out.print("\nMasukkan isi text: ");
            String isi = input.nextLine();
            fileku.WriteFile(f, isi);

            System.out.print("Mau nambah text? (y/n): ");
            String pilihan = input.nextLine();

            if(pilihan.equalsIgnoreCase("n")){
                jalan =  false;
                break;
            }
        }

        fileku.ReadFile(f);
    }
}

class MyFile{
    public void MakeFile(File f) {
        try {
            f.createNewFile();
        } catch (IOException err) {
            System.err.println("Gagal membuat: " + err.getMessage());
        }
    }

    public void WriteFile(File f, String isi) {
        try{
            FileWriter tulis = new FileWriter(f, true);
            tulis.write(isi + "\n");
            tulis.close();
        } catch (IOException err) {
            System.err.println("Gagal menulis: " + err.getMessage());
        }
    }

    public void ReadFile(File f) {
        try{
            BufferedReader baca = new BufferedReader(new FileReader(f));
            String isiFile;

            while((isiFile = baca.readLine()) != null) {
                System.out.println(isiFile);
            }
            baca.close();
        } catch (IOException err) {
            System.err.println("Gagal membaca: " + err.getMessage());
        }
    }
}