import java.util.Scanner;

public class Variáveis {
    public static void main(String[] args) {

        Scanner leitor = new Scanner(System.in);

        System.out.print("Digite sua idade: ");
        int idade = leitor.nextInt();
        System.out.println(idade);
        leitor.close();

        if (idade < 15) {
            System.out.println("Você não pode entrar.");
        } else {
            System.out.println("Você pode entrar.");
        }

        leitor.close();
    }
}
