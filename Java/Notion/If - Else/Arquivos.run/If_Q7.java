import java.util.Scanner;

public class If_Q7 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        float[] notas = new float[3];
        float soma = 0;
        float media;

        System.out.print("Digite seu nome: ");
        String nome = scanner.nextLine();

        for (int i = 0; i < 3; i++) {
            System.out.printf("Digite a nota %d: ", i + 1);
            notas[i] = scanner.nextFloat();
            soma += notas[i];
        }

        media = soma / 3;

        if (media >= 7) {
            System.out.print(nome + ", você esta aprovado!");
        } else if (media >= 5.1 && media <= 6.9) {
            System.out.print(nome + ", você esta de recuperacao!");
        } else {
            System.out.print(nome + ", voce esta reprovado!");
        }

        scanner.close();
    }
}
