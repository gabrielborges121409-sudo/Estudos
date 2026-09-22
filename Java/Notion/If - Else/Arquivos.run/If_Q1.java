import java.util.Scanner;

public class If_Q1 {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.print("Digite o valor do produto: ");
        double valor = scanner.nextDouble();

        System.out.println("Vai ser parcelado em quantas vezes (3 ou 5)?");
        int parcelas = scanner.nextInt();

        if (parcelas == 3) {
            valor *= 1.10;
        } else if (parcelas == 5) {
            valor *= 1.20;
        } else if (parcelas == 0) {
        } else {
            System.out.println("Número de parcelas inválido.");
            scanner.close();
            return;
        }

        double prestacao = valor / parcelas;

        System.out.println("O valor total a ser pago é " + valor);
        System.out.println("O valor da prestação é " + prestacao);

        scanner.close();
    }
}