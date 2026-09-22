class ContaBancaria:
    #def = métodos
    def __init__(self, titular, saldo=0):
        #atributos
        self.titular = titular
        self.saldo = saldo

    def depositar(self, valor):
        self.saldo += valor
        print(f"Depósito de R${valor} realizado | Novo saldo: R${self.saldo}")

    def sacar(self, valor):
        if self.saldo >= valor:
            self.saldo -= valor
            print(f"Saque de R${valor} realizado | Saldo restante: R${self.saldo}")
        else:
            print("Saldo insuficiente para realizar o saque.")
#Objeto
conta_carlos = ContaBancaria("Carlos", 100)
conta_carlos.depositar(50)
conta_carlos.sacar(200)
conta_carlos.sacar(30)
print(f"Saldo final do {conta_carlos.titular}: R${conta_carlos.saldo}")