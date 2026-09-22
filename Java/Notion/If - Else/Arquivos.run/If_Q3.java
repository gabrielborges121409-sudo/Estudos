import java.util.Scanner;

public class If_Q3 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        float peso;

        System.out.print("Digite sua altura: ");
        float altura = scanner.nextFloat();
        System.out.print("Digite seu sexo: \n1 - Homem\n2 - Mulher\nR: ");
        int sexo = scanner.nextInt();

        if (sexo == 1) {
            peso = (72.2f * altura) - 58;
            System.out.printf("Peso ideal: %.2fkg.", peso);
        } else if (sexo == 2) {
            peso = (62.1f * altura) - 44.7f;
            System.out.printf("Peso ideal: %.2fkg.", peso);
        } else {
            System.out.println("Inválido, digite > 1 < ou > 2 <;");
        }

        scanner.close();
    }
}
