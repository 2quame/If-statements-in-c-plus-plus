
#include <iostream>

int main() {
  double earthWeight;
  double destW;
  int planetNum;
  std::cout<<"What is your Earth Weight:\n";
  std::cin>>earthWeight;

  std::cout<<"Enter the number of the planet you want to fight on:\n";
  std::cin>>planetNum;

  if(planetNum==1)
  {destW=earthWeight*0.38;
    std::cout<<"Your weight on this planet is:"<<destW;
  }

  else if (planetNum==2)
  {destW=earthWeight*0.91;
    std::cout<<"Your weight on this planet is:"<<destW;
  }

  else if (planetNum==3)
  {destW=earthWeight*0.38;
  std::cout<<"Your weight on this planet is:"<<destW;
  }

  else if (planetNum==4)
  {destW=earthWeight*2.34;

  std::cout<<"Your weight on this planet is:"<<destW;}

  else if (planetNum==5)
  {destW=earthWeight*1.06;
  std::cout<<"Your weight on this planet is:"<<destW;
  }

  else if (planetNum==6)
  {destW=earthWeight*0.92;
  std::cout<<"Your weight on this planet is:"<<destW;
  }

  else if (planetNum==7)
  {destW=earthWeight*1.19;
  std::cout<<"Your weight on this planet is:"<<destW;
  }

  else{
    std::cout<<"Enter a number from 1 to 7\n";
  }











}
