int grade;
		cout << "enter an enteger\n";
		cin >> grade;
		if (grade >= 90 && grade< 100 ) {
			cout << " your grade is A\n";

		}
		else if(grade >= 80 && grade <= 89 ){
			cout << " your grade is B\n";
		}
		else if (grade >= 70 && grade <= 79) {
			cout << " your grade is C\n";
		}
		else if (grade >= 60 && grade <= 69) {
			cout << " your grade is D\n";
		}
		else
		{
			cout << " your grade is F\n";
		}
