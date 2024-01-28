import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

public class ANNIS_LA7 {

    public static void main(String[] args) throws IOException {
        String path = "D:\\punya iki\\kuli-ahh\\lab ti\\alpro2a\\pertemuan7";
        BufferedReader input = new BufferedReader(new InputStreamReader(System.in));

        //membuat file.txt
        System.out.print("\nTuliskan nama file yang ingin dibuat : ");
        String namaFile = input.readLine();

        //membuat objek file dan membuat file .txt
        File f = new File(path + namaFile);
        
        //membuat objek iofile dari class file
        fileku ioFile = new fileku();
        ioFile.membuatFile(f);
        
        //input data kedalam file.txt
        boolean loop = true;
        while(loop){
            System.out.print("\nmasukkan data : ");
            String inputData = input.readLine();
            ioFile.menulisFile(f, inputData);
            
            //tanya
            System.out.print("Ingin tambah data[y/t]?");
            String tanya = input.readLine();
            if(tanya.equalsIgnoreCase("t")){
                loop = false;
                System.out.println("data berhasil ditulis pada file " + namaFile);
            }
        }

        //menampilkan isi file.txt
        System.out.println("\nIsi data pada file " + namaFile + " adalah :");
        ioFile.menampilkanIsiFile(f);
    }     
}

class fileku{
    String isiFile;         

    public void membuatFile(File f){
        try{
		if(f.createNewFile()){
			System.out.println("File berhasil dibuat!");
		} 
		}catch(IOException e){
		    System.out.println("Terjadi kesalahan.");			  
		}
    }

    public void menulisFile(File f, String inputData){
        try{
			FileWriter tulis = new FileWriter(f, true);
            tulis.write(inputData + "\n");
			tulis.close();
        }catch(IOException e){
            System.err.println("Gagal menulis ke file : " + e.getMessage());
        }
    }

    public void menampilkanIsiFile(File f) {
        try{
			BufferedReader reader = new BufferedReader(new FileReader(f));
			
            while ((isiFile = reader.readLine()) != null) {
                System.out.print(isiFile + "\n");
            }
        }catch(IOException e){
            System.err.println("Gagal membaca file: " + e.getMessage());
        }
    }
}