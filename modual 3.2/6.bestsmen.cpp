#include<iostream>
using namespace std;
class cricketer{
    public:
        string name;
        int age;
        string team;
};
class batsman:public cricketer{
    public:
        int total_runs;
        int best_performance;
        float average_runs;
    void input_data(){
        cout<<"Enter name of the batsman: ";
        cin>>name;
        cout<<"Enter age of the batsman: ";
        cin>>age;
        cout<<"Enter team of the batsman: ";
        cin>>team;
        cout<<"Enter total runs of the batsman: ";
        cin>>total_runs;
        cout<<"Enter best performance of the batsman: ";
        cin>>best_performance;
    }
    void calculate_average_runs(){
        average_runs = total_runs/5.0; //assuming 5 matches played
    }
    void display_data(){
        cout<<"\nName: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Team: "<<team<<endl;
        cout<<"Total Runs: "<<total_runs<<endl;
        cout<<"Best Performance: "<<best_performance<<endl;
        cout<<"Average Runs: "<<average_runs<<endl;
    }
};
int main(){
    batsman b1;
    b1.input_data();
    b1.calculate_average_runs();
    b1.display_data();
    return 0;
}
