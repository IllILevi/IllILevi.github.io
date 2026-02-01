#include <string>
#include <iostream>

using std::cout;
using std::string;

class RescueAnimalTest {
private:
	string name_;
	string animalType_;
	string gender_; 
	string ageYr_;
	string weight_;
	string acquisitionDate_;
	string acquisitionCountry_;
	string trainingStatus_;
	bool reserved_;
	string inServiceCountry_;

public:
	RescueAnimalTest() {}

	const string& name() const noexcept { return name_; }
	const string& animalType() const noexcept { return animalType_; }
	const string& gender() const noexcept { return gender_; }
	const string& age() const noexcept { return ageYr_; }
	const string& weight() const noexcept { return weight_; }
	const string& acquisitionDate() const noexcept { return acquisitionDate_; }
	const string& acquisitionCountry() const noexcept { return acquisitionCountry_; }
	const string& trainingStatus() const noexcept { return trainingStatus_; }
	bool reserved() const noexcept { return reserved_; }
	const string& inServiceCountry() const noexcept { return inServiceCountry_; }

	
	//TODO: ASK ABOUT WHTHER OR NOT ADDING INVARIANTS TO SOME SETTERS AND GETTING RID OF OTHERS
	// WHAT TO DO INSTEAD
	
	void setName(string name) {
		name = name;
	}

	void setAnimalType(string animalType) {
		animalType_ = animalType;
	}

	void setGender(string gender) {
		gender_ = gender;
	}

	void setAge(string age) {
		if (age < 1) throw std::invalid_argument("age cannot be less than 1");
		ageYr_ = age;
	}

	void setWeight(string weight) {
		weight_ = weight;
	}

	void setAcquisitionDate(string acquisitionDate) {
		acquisitionDate_ = acquisitionDate;
	}

	void setAcquisitionCountry(string acquisitionCountry) {
		acquisitionCountry_ = acquisitionCountry;
	}

	void setTrainingStatus(string trainingStatus) {
		trainingStatus_ = trainingStatus;
	}

	void setReserved(bool reserved) {
		reserved_ = reserved;
	}

	void inServiceCountry(string inServiceCountry) {
		inServiceCountry_ = inServiceCountry;
	}
};