import java.util.Scanner;

public class Funcoes_Q1 {

    public static void tabuada(int numero) {

        for (int i = 0; i < 10; i++) {
            System.out.println(numero + " X " + (i + 1) + " = " + (numero * (i + 1)));
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Digite um número inteiro: ");
        int numero = scanner.nextInt();

        tabuada(numero);
        scanner.close();
    }
}
