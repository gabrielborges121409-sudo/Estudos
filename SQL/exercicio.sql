/*
Cenário: Imagine que você tem uma tabela chamada produtos com as seguintes colunas: 
id, nome, preco e categoria.

Questões:
INSERT

Escreva o comando para cadastrar um novo produto chamado 'Teclado', 
com preço 150.00, na categoria 'Periféricos' e id 1.

SELECT

Escreva uma consulta para buscar apenas o nome e o preco de todos os 
produtos que custam mais de 100.00.

UPDATE

Escreva o comando para alterar o preço do produto 
com id = 1 para 120.00.

DELETE

Escreva o comando para apagar o produto que possui o id = 1.
*/

CREATE TABLE produtos (
    id INT PRIMARY KEY,
    nome VARCHAR(100),
    preco DECIMAL(10, 2),
    categoria VARCHAR(100)
);

INSERT INTO produtos (id, nome, preco, categoria) VALUES (1 , 'Teclado', 150.00, 'Perifericos');
SELECT nome, preco FROM produtos WHERE preco > 100.00
UPDATE produtos SET preco = 120.00 WHERE id = 1
DELETE FROM produtos WHERE id = 1