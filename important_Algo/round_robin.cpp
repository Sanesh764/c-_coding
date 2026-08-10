#include<iostream>
#include<queue>
using namespace std;
class Process{
public:
    int id;
    int arrivaltime;
    int bursttime;
    int completiontime;
    int turnaroundtime;
    int waitingtime;
};

void calculatetimes(Process processes[],int n,int quantum){
    int remaingTime[n];
    for(int i=0;i<n;i++){
        remaingTime[i]=processes[i].bursttime;
    };
    int currentTime=0;
    bool allDone=false;
    while(!allDone){
        allDone=true;
        for(int i=0;i<n;i++){
            if(remaingTime[i]>0){
                allDone=false;
                if(remaingTime[i]>quantum){
                    currentTime += quantum;
                    remaingTime[i] -= quantum;
                } else{
                    currentTime += remaingTime[i];
                    processes[i].completiontime=currentTime;
                    remaingTime[i]=0;
                }
            }
        }
    }
};

void calculateturnaroundTime(Process processes[],int n){
    for(int i=0;i<n;i++){
        processes[i].turnaroundtime=processes[i].completiontime-processes[i].arrivaltime;
    };
};


void calculatewaitingtime(Process processes[],int n){
    for(int i=0;i<n;i++){
        processes[i].waitingtime=processes[i].turnaroundtime-processes[i].bursttime;
    };
};

void printTable(Process processes[], int n) {
    cout << "\n---------------------------------------------------------------\n";
    cout << "| Process | Arrival | Burst | Completion | Turnaround | Waiting |\n";
    cout << "---------------------------------------------------------------\n";
    for (int i = 0; i < n; i++) {

        cout << "|    " << processes[i].id
             << "    |    " << processes[i].arrivaltime
             << "    |   " << processes[i].bursttime
             << "   |     " << processes[i].completiontime
             << "      |     " << processes[i].turnaroundtime
             << "     |    " << processes[i].waitingtime
             << "   |\n     ";
    }
    cout << "---------------------------------------------------------------\n";
}

int main() {
    int n,quantum;
    cout<<"Enter the Numbers of process";
    cin>>n;

    cout<<"Enter the time Quantom";
    cin>>quantum;

    Process Processes[n];
    cout<<"Enter process details:\n";
    for(int i=0;i<n;i++){
        cout<<"process "<<i+1 <<":\n";
        Processes[i].id=i+1;
        cout<<"Arrival time: ";
        cin>>Processes[i].arrivaltime;
        cout<<"Burst Time:  ";
        cin>>Processes[i].bursttime;
    }

    calculatetimes(Processes,n,quantum);
    calculateturnaroundTime(Processes,n);
    calculatewaitingtime(Processes,n);

    cout<<"\n round robin sceduling results:\n";
    printTable(Processes,n);

    return 0;
}