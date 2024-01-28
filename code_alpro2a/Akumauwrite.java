import java.io.*;

public class Akumauwrite {
    public static void main(String[] args) {
        String path = "D:\\punya iki\\kuli-ahh\\lab ti\\alpro2a\\pertemuan7";
        File f = new File(path, "lahiya.txt");
        
        try {
            FileWriter tulis = new FileWriter(f);
            tulis.write("Aku dapat mba lucu\n");
            tulis.write("Kamu Cupu");
            tulis.close();
        } catch (IOException err) {
            System.out.println("Error message: " + err.getMessage());
        }
    }
}