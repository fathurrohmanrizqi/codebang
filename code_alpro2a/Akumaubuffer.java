import java.io.*;

public class Akumaubuffer {
    public static void main(String[] args) {
        String path = "D:\\punya iki\\kuli-ahh\\lab ti\\alpro2a\\pertemuan7";
        File f = new File(path, "lahiya.txt");

        try {
            BufferedReader baca = new BufferedReader(new FileReader(f));
            String isiFile;

            while((isiFile = baca.readLine()) != null){
                System.out.println(isiFile);
            }
            baca.close();
        } catch(IOException err) {
            System.out.println("Error Message: " + err.getMessage());
        }
    }
}
