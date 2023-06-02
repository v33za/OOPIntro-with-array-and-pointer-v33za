#include <iostream>
using namespace std;

#include "student.h"

int main(int argc, char *argv[]) {
 
  int n= (argc-1)/3;
  student *pt_std=new student[n];
  int i;
  for(i=0;i<n;i++){
    (*pt_std).set_all(argv[3*i+1],atoi(argv[3*i+2]),atof(argv[3*i+3]));
    pt_std++;
   }
    pt_std -=n;
  for(i=0;i<n;i++)
  {  
    pt_std[i].print_all();
  }

  float highest_gpa = pt_std[0].get_score();
 
  for(int j=0;j<n;j++)
  {
    if((pt_std[j].get_score()>highest_gpa))
      highest_gpa = pt_std[j].get_score();
  }
  cout<<"Highest GPA ppl : \n";
  for(int j =0;j<n;j++)
  {
    if(pt_std[j].get_score()==highest_gpa)
      pt_std[j].print_all();
  }
  delete [] pt_std;
  }