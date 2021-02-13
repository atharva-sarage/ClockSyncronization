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
class localClock{
    int error_factor;
    public:
    std::chrono::nanoseconds readTime(){
        std::chrono::system_clock::time_point t1 = std::chrono::high_resolution_clock::now();
        t1 += std::chrono::seconds(1);
        auto duration = t1.time_since_epoch();
        auto nanoseconds = std::chrono::duration_cast<std::chrono::nanoseconds>(duration);
        cout<<nanoseconds.count()<<endl;
    }

};
int main()
{
    localClock c1;
    c1.readTime();

//     #include <chrono>
// #include <ctime>

// std::chrono::time_point<std::chrono::system_clock> now = std::chrono::system_clock::now();
// auto duration = now.time_since_epoch();

// typedef std::chrono::duration<int, std::ratio_multiply<std::chrono::hours::period, std::ratio<8>
// >::type> Days; /* UTC: +8:00 */

// Days days = std::chrono::duration_cast<Days>(duration);
//     duration -= days;
// auto hours = std::chrono::duration_cast<std::chrono::hours>(duration);
//     duration -= hours;
// auto minutes = std::chrono::duration_cast<std::chrono::minutes>(duration);
//     duration -= minutes;
// auto seconds = std::chrono::duration_cast<std::chrono::seconds>(duration);
//     duration -= seconds;
// auto milliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(duration);
//     duration -= milliseconds;
// auto microseconds = std::chrono::duration_cast<std::chrono::microseconds>(duration);
//     duration -= microseconds;
// auto nanoseconds = std::chrono::duration_cast<std::chrono::nanoseconds>(duration);

// std::cout << hours.count() << ":"
//           << minutes.count() << ":"
//           << seconds.count() << ":"
//           << milliseconds.count() << ":"
//           << microseconds.count() << ":"
//           << nanoseconds.count() << std::endl;
}