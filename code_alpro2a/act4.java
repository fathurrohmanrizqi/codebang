public class act4 {
    public static void main(String[] args) {
        int maximal = 0;
        int[][] array2D = {{2,3,4},{7,8,9},{5,6,10}};

        for (int a = 0; a < array2D.length; a++){
            for (int b = 0; b < array2D[a].length; b++){
                if(array2D[a][b] > maximal){
                    maximal = array2D[a][b];
                }
            }
        }
        System.out.print("Nilai maximal dari array adalah " + maximal);
    }
}