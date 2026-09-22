import java.util.Scanner;

public class If_Q8 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        /*
         * Escrever um algoritmo para determinar o consumo médio de um automóvel
         * sendo fornecida a distância total percorrida pelo automóvel e o total de
         * combustível gasto.
         */

        System.out.print("Digite a distancia percorrida: ");
        float distancia = scanner.nextFloat();
        System.out.print("Digite o total de combustivel gasto: ");
        float combustivelGasto = scanner.nextFloat();

        System.out.printf("O consumo medio e: %.2f", distancia / combustivelGasto);

        scanner.close();
    }
}