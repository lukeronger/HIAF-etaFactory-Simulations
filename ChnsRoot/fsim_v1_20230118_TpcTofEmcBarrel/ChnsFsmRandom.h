// simple soliton interface to manage random number generation

class TRandom3;

class ChnsFsmRandom {
public:
  static TRandom3* Instance();
private:
  ChnsFsmRandom() {};
  ~ChnsFsmRandom() {};
  static TRandom3* frand;
};
