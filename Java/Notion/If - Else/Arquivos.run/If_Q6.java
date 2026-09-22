import java.util.Scanner;

public class If_Q6 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        float salarioFinal = 0;
        float comissao;

        System.out.print("Digite o nome do vendedor: ");
        String nome = scanner.nextLine();
        System.out.print("Qual seu salário fixo: ");
        float salario = scanner.nextFloat();
        System.out.print("Digite o total de vendas no mês: R$ ");
        int totalDeVendas = scanner.nextInt();

        if (totalDeVendas >= 100.00) {
            comissao = totalDeVendas * 0.15f;
            salarioFinal = salario + comissao;
        }

        System.out.print(
                nome + ", seu salário fixo é de R$" + salario + " e seu salário no final do mês é R$" + salarioFinal);

        scanner.close();
    }
}
