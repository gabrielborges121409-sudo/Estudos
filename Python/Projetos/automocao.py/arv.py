import pandas as pd
dicionario_ativo = {}
dicionario_inativo = {}

df = pd.read_json('clientes.json')

for index, linha in df.iterrows():
    if linha['status'] == 'ativo':
        print(f"Cliente ativo encontrado: {linha['nome']}")
    else: 
        dicionario_inativo[id] = "nome"

#titulo do exercicio no gemini: u exercicio de automoção
