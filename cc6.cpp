// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     for (int i = 0; i < t; i++)
//     {
//         int n;
//         cin>>n;
//         int result[n];
//         int arr[n];
//         for (int j = 0; j < n; j++)
//         {
//             cin>>arr[j];
//         }
//         for (int k = 2; k < n; k++)
//         {
//             if((n-k)%2==1){
//                 n = n/2;
//             }
//         }      
//}
// return 0;
// }
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int N;
    cin >> N;
    vector<int> P(N);
    
    for (int i = 0; i < N; i++)
        cin >> P[i];
    
    set<int> availableSeats;
    for (int i = 1; i <= N; i++) {
        availableSeats.insert(i);
    }
    
    set<int> occupiedSeats;
    
    for (int person : P) {
        // Find the best seat
        int bestSeat = -1;
        int maxMinDist = -1;
        
        for (int seat : availableSeats) {
            int minDist = N + 1; // Start with a large number
            
            for (int occupied : occupiedSeats) {
                minDist = min(minDist, abs(seat - occupied));
            }
            
            // Check primary goal
            if (minDist > maxMinDist) {
                maxMinDist = minDist;
                bestSeat = seat;
            }
            // Secondary goal (pick best seat for next person)
            else if (minDist == maxMinDist) {
                int futureMinDist = N + 1;
                for (int futureSeat : availableSeats) {
                    if (futureSeat == seat) continue;
                    int tempMinDist = N + 1;
                    for (int occupied : occupiedSeats) {
                        tempMinDist = min(tempMinDist, abs(futureSeat - occupied));
                    }
                    tempMinDist = min(tempMinDist, abs(futureSeat - seat));
                    futureMinDist = min(futureMinDist, tempMinDist);
                }
                
                int currentFutureMinDist = N + 1;
                for (int futureSeat : availableSeats) {
                    int tempMinDist = N + 1;
                    for (int occupied : occupiedSeats) {
                        tempMinDist = min(tempMinDist, abs(futureSeat - occupied));
                    }
                    currentFutureMinDist = min(currentFutureMinDist, tempMinDist);
                }
                
                if (futureMinDist > currentFutureMinDist) {
                    bestSeat = seat;
                }
            }
        }
        
        if (bestSeat == -1 || bestSeat != person) {
            cout << "NO\n";
            return;
        }
        
        // Update occupied and available sets
        occupiedSeats.insert(bestSeat);
        availableSeats.erase(bestSeat);
    }
    
    cout << "YES\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int T;
    cin >> T;
    
    while (T--) {
        solve();
    }
    
    return 0;
}
