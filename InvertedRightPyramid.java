import java.util.Scanner;
public class Main {
    static void InvRightPyramid(int n){
        for(int i=n; i>=1; i--){
            for(int j =i; j>=1; j--){
                System.out.print("*");
            }
            System.out.println();
        }
    }
    public static void main(String[] args) {
        Scanner myinp = new Scanner(System.in);
        int n = myinp.nextInt();
        InvRightPyramid(n);
    }
}
