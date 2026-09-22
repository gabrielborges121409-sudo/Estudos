/*
Tipos básicos de variáveis em C++

int
// inteiro com sinal, usado para números inteiros comuns.

short
// inteiro menor, usado quando precisa de menos espaço.

long
// inteiro maior, usado quando int pode ser pequeno demais.

long long
// inteiro ainda maior, para valores muito grandes.

unsigned int / unsigned long / unsigned long long
// inteiros sem sinal, que armazenam só valores não negativos.

char
// caractere único ou pequena unidade de texto.

wchar_t, char16_t, char32_t
// tipos de caractere mais amplos, usados para Unicode em diferentes tamanhos.

bool
// valor lógico true ou false.

float
// número real de precisão simples.

double
// número real de precisão dupla, mais usado para cálculos com casas decimais.

long double
// número real com precisão estendida.

std::string
// tipo de texto dinâmico da biblioteca padrão C++.

auto
// permite que o compilador deduzir o tipo da variável automaticamente.

Tipos compostos e referências

int*
// ponteiro para inteiro, guarda o endereço de memória de um int.

int&
// referência a um inteiro, alias de outra variável.

int[]
// array de inteiros, coleção sequencial de valores.

std::vector<T>
// lista dinâmica que cresce conforme necessário.

std::array<T, N>
// array de tamanho fixo com funcionalidades de contêiner.

std::pair<T1, T2>
// par de valores de tipos diferentes.

std::tuple<Ts...>
// conjunto de valores de tipos diferentes.

Bibliotecas padrão comuns (#include)

#include <iostream>
// entrada e saída padrão (std::cin, std::cout, std::cerr).

#include <string>
// classe std::string para manipular texto.

#include <vector>
// contêiner dinâmico tipo lista.

#include <array>
// array de tamanho fixo como contêiner.

#include <map>
// mapa ordenado de chave-valor.

#include <unordered_map>
// mapa sem ordem, mais rápido para busca em muitas situações.

#include <set>
// conjunto de valores únicos ordenados.

#include <unordered_set>
// conjunto sem ordem, busca mais rápida.

#include <algorithm>
// funções úteis como sort, find, count, copy.

#include <cmath>
// funções matemáticas (sin, cos, pow, sqrt).

#include <limits>
// informações sobre limites de tipos numéricos (std::numeric_limits).

#include <fstream>
// leitura e escrita em arquivos (std::ifstream, std::ofstream).

#include <sstream>
// fluxo que lê/escreve em strings.

#include <cstdlib>
// utilitários gerais (std::rand, std::exit, conversões).

#include <ctime>
// tempo e data (std::time, std::localtime).

#include <memory>
// smart pointers (std::unique_ptr, std::shared_ptr).

#include <thread>
// criação de threads.

#include <mutex>
// sincronização entre threads.

#include <chrono>
// medições de tempo e durações.

#include <iomanip>
// manipuladores de formato de saída (std::setw, std::setprecision).
*/

