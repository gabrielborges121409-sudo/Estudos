import java.util.Scanner;

public class If_Q2 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Digite o peso de peixes: ");
        float peso = scanner.nextFloat();

        if (peso >= 50.00) {
            float excesso = peso - 50.00f;
            float multa = excesso * 4.00f;
            System.out.println("Você deve pagar uma multa de R$" + multa);
        }

        else {
            System.out.println("Está limpo.");
        }

        scanner.close();
    }
}