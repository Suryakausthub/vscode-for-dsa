//2037. Minimum Number of Moves to Seat Everyone

class Solution {
	public:
		int minMovesToSeat(vector<int>& seats, vector<int>& students) {
			sort(seats.begin(), seats.end());
			sort(students.begin(), students.end());
			int count =0;
			for(int i=0;i< seats.size();i++){
					if(seats[i] == students[i]){
						count = count + 0;
					}
				else if(seats[i] == students[i] + 1 || seats[i] == students[i] - 1){
					count = count +1;
				}
				else{
					if(students[i] - seats[i] > 0){
						count = count + (students[i] - seats[i]);
					}
					else{
						count = count - (students[i] - seats[i]);
					}
				}
			}
			return count;
		}
	};