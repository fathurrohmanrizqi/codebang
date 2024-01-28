public class Act6 {
    public static void main(String[] args) {
        Mahasiswa obj = new Mahasiswa("Rizqi Fathurrohman","1IA24","51422475",90,90);
        obj.biodata();
        obj.hitungan();
    }
}

class Mahasiswa{
    String name;
    String kelas;
    String npm;
    int uts;
    int uas;
    int hasil;

    Mahasiswa(String name, String kelas, String npm, int uts, int uas) {
        this.name = name;
        this.kelas = kelas;
        this.npm = npm;
        this.uts = uts;
        this.uas = uas;
    }
    
    void biodata() {
    System.out.println("===BIODATA===");
    System.out.println("Nama : " + this.name);
    System.out.println("Kelas : " + this.kelas);
    System.out.println("NPM : " + this.npm);
    }
    
    public int hasilnilai(){
        hasil = (uts + uas) / 2;
        return hasil;
    }
    
    void hitungan() {
    System.out.println("Nilai uts : " + this.uts);
    System.out.println("Nilai uas: " + this.uas);
    System.out.println("Nilai akhir: " + hasilnilai());
    }
}