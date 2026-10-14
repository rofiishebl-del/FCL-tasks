#include<iostream>
#include<string>
using namespace std;
class Lab{
    protected:
      string LabName;
     int ComputerCount;
     int AC_count;
     public:
       Lab(string LN,int C ,int AC):LabName(LN),ComputerCount(C),AC_count(AC){}
       void set_LabName(string LN){
            LabName=LN;

       }
       string get_LabName()const{
         return LabName;
       }
    void set_ComputerCount(int C){
        ComputerCount=C;
    }
    int get_ComputerCount()const{
      return  ComputerCount;
    }
void set_AC_count(int AC){
    AC_count=AC;

}
int get_AC_count()const{
    return AC_count;
}
void display()const{
    cout<<"##############Lab Details############\n";
    cout<<"LabName : "<<LabName<<"\n"
        <<"ComputerCount : "<<ComputerCount<<"\n"
        <<"AC_count : "<<AC_count<<"\n";
}

};
class NetLab : public Lab{
    private:
     int routers;
     int switches;
    public:
      NetLab(string LN,int C ,int AC, int r,int s):Lab(LN ,C,AC){
         routers=r;
         switches=s;
}
void set_routers(int r){
    routers=r;

}
int get_routers()const{
    return routers;
}
void set_switches(int s){
    switches=s;
}
int get_switches()const{
   return switches;
}
void display()const{
    Lab::display();
    cout<<"routers count : "<<routers<<"\n"
        <<"switches count : "<<switches<<'\n';

}

     };
int main(){
    NetLab l1("306",15,2,6,7);
    l1.display();
    l1.set_LabName("304");
    l1.set_AC_count(3);
    l1.display();

}

