// Gerando um arquivo .h
// O que é um arquivo .h?
// Um arquivo .h, também conhecido como arquivo de cabeçalho (header file), é um arquivo que contém declarações de funções, classes, variáveis e constantes que podem ser compartilhadas entre diferentes arquivos de código-fonte em C++. 
// Ele serve como uma interface para o código implementado em arquivos .cpp (arquivos de implementação). 

class Time {
private:  // Não  podem ver os atributos da classe, apenas os métodos públicos podem acessar os atributos privados da classe.
  int hour;     // 0 - 23
  int minute;   // 0 - 59
  int second;   // 0 - 59
public: // Podem ver os atributos da classe, e podem acessar os atributos privados da classe.
  Time(int hour = 0, int minute = 0, int second = 0);
  int getHour() const;
  void setHour(int hour);
  int getMinute() const;
  void setMinute(int minute);
  int getSecond() const;
  void setSecond(int second);
  void print() const;
  void nextSecond();
};
