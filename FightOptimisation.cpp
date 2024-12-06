#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <iomanip>
#include <map>
#include <limits>

using namespace std;

struct Flight {
    string from;
    string to;
    int takeOff; // Time in minutes since 00:00
    int landing; // Time in minutes since 00:00
    int cost;
};

int timeToMinutes(const string &time) {
    istringstream ss(time);
    string hour, minute, period;
    getline(ss, hour, ':');
    getline(ss, minute, ' ');
    getline(ss, period);
    
    int h = stoi(hour);
    int m = stoi(minute);
    
    if (period == "Pm" && h != 12) h += 12;
    if (period == "Am" && h == 12) h = 0;
    
    return h * 60 + m;
}

int main() {
    int N;
    cin >> N;
    vector<Flight> flights(N);
    
    for (int i = 0; i < N; i++) {
        string from, to, takeOffTime, landingTime;
        int cost;
        cin >> from >> to >> takeOffTime >> landingTime >> cost;

        flights[i] = {from, to, timeToMinutes(takeOffTime), timeToMinutes(landingTime), cost};
    }

    string startCity, endCity, startTimeStr, endTimeStr;
    cin >> startCity >> endCity >> startTimeStr >> endTimeStr;

    int startTime = timeToMinutes(startTimeStr);
    int endTime = timeToMinutes(endTimeStr);

    map<string, vector<Flight>> graph;
    
    for (const auto &flight : flights) {
        graph[flight.from].push_back(flight);
    }

    map<string, int> minCost;
    
    for (const auto &flight : flights) {
        if (flight.from == startCity && flight.takeOff >= startTime && flight.landing <= endTime) {
            minCost[flight.to] = min(minCost[flight.to], flight.cost);
        }
        
        for (const auto &nextFlight : graph[flight.to]) {
            if (flight.landing <= nextFlight.takeOff && nextFlight.landing <= endTime) {
                minCost[nextFlight.to] = min(minCost[nextFlight.to], flight.cost + nextFlight.cost);
            }
        }
    }

    if (minCost.find(endCity) != minCost.end()) {
        cout << minCost[endCity] << endl;
    } else {
        cout << "Impossible" << endl;
    }

    return 0;
}