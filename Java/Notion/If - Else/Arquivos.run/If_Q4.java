import java.util.Scanner;

public class If_Q4 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        float raio;

        System.out.print("Qual operação: \n1 - Área\n2 - Perímetro\nR: ");
        int operacao = scanner.nextInt();

        if (operacao == 1) {
            System.out.print("Digite o raio em cm: ");
            raio = scanner.nextFloat();
            System.out.printf("A área é: %.2fcm", 3.14 * (raio * raio));
        } else if (operacao == 2) {
            System.out.print("Digite o raio em cm: ");
            raio = scanner.nextFloat();
            System.out.printf("O perímetro é: %.2fcm", 2 * 3.14 * raio);
        } else {
            System.out.println("Inválido.");
        }

        scanner.close();
    }
}
