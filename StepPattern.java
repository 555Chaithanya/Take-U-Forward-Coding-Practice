// "static void main" must be defined in a public class.
import java.util.Scanner;
public class Main {
    static void StepPattern(int n){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
    public static void main(String[] args) {
        Scanner myinp = new Scanner(System.in);
        int n = myinp.nextInt();
        StepPattern(n);
    }
}