#include "MedidasBase.h"
#include "RafaMedidas.cpp"
#include "TesteMedidas.cpp"
enum Type{RAFANUM,TESTENUM, REGGAE, INVALID};
/*Factory Class*/
    class MedidasFactory
    {
    public:
     /*Factory Method*/
     MedidasBase *getMedidas(Type type)     {
      MedidasBase *medidas = NULL;

      /*Logic based on Genre*/
      switch(type)
      {
      case RAFANUM:
       medidas = new RafaMedidas();
       break;
      case TESTENUM:
//       medidas = new TesteMedidas();
       break;
       medidas = NULL;
       break;
      }
      return medidas;
     }
    };
