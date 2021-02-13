#include<bits/stdc++.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#define BUFSIZE 1024
#define SERVERIP "127.0.0.1"
using namespace std;
map <pair<int,int>,int> m1;
mutex mulock;
ofstream output; 
void test(){
    for(int i=1;i<=1000;i++){
        mulock.lock();
        m1[{rand()%10000,rand()%10000}] = rand()%10000;
        output<<rand()%10000<<" "<<rand()%10000<<endl;
        mulock.unlock();
    }
}
int main(){
    output.open("Log.txt");
    srand(time(NULL));
    thread threads[1005];
    for(int i=1;i<=1000;i++){
        threads[i] = thread(test);
    }
    for(int i=1;i<=1000;i++){
        threads[i].join();
    }
    cout<<m1.size()<<endl;
    
}