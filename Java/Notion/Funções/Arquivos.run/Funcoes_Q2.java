import java.util.Scanner;

public class Funcoes_Q2 {

    public static boolean funcao(int numero) {

        boolean par;

        if (numero % 2 == 0) {
            par = true;
        }

        else {
            par = false;
        }
        return par;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Digite um numero inteiro: ");
        int numero = scanner.nextInt();

        System.out.println("True = par");
        System.out.println("False = impar");
        System.out.println("Resultado: " + funcao(numero));

        scanner.close();
    }
}
