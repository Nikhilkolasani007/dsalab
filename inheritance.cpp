 #include <iostream>
 
 using namespace std;
 
 class first_sem{
 	private:
 		int roll_no;
 		float cgpa;
 		int year;
 		
 	public:
 		first_sem(int x, float y, int z){
 			roll_no = x;
 			cgpa = y;
 			year = z;
 			cout << "Roll No " << roll_no << "CGPA" << cgpa << "Year" << year;
 		 }
 };
 
 class second_sem : public first_sem{
 	private:
 		float cgpa2;
 	
 	public:
 		void setcgpa2(int n) {
 			cgpa2 = n;
		 }
		 
		void total_cgpa(){
			float secondsem = cgpa2 + cgpa;
			cout << "Roll No " << roll_no << "CGPA" << cgpa2 << "Year" << year;
		}
 };
 
 
 int main(){
 	first_sem s1(1,8.8,2025);
 	s1.first_sem();
 	second_sem s2(2,8.9,2025);
 	s2.total_cgpa();
 	
 	return 0;
 }
