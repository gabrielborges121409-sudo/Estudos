import java.util.Scanner;

public class If_Q5 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Digite o número do mês: ");
        int mes = scanner.nextInt();

        switch (mes) {
            case 1:
                System.out.print("O mês é Janeiro.");
                break;
            case 2:
                System.out.print("O mês é Fevereiro.");
                break;
            case 3:
                System.out.print("O mês é Março.");
                break;
            case 4:
                System.out.print("O mês é Abril.");
                break;
            case 5:
                System.out.print("O mês é Maio.");
                break;
            case 6:
                System.out.print("O mês é Junho.");
                break;
            case 7:
                System.out.print("O mês é Julho.");
                break;
            case 8:
                System.out.print("O mês é Agosto.");
                break;
            case 9:
                System.out.print("O mês é Setembro.");
                break;
            case 10:
                System.out.print("O mês é Outubro.");
                break;
            case 11:
                System.out.print("O mês é Novembro.");
                break;
            case 12:
                System.out.print("O mês é Dezembro.");
                break;
            default:
                System.out.print("Inválido.");
        }

        scanner.close();
    }
}
