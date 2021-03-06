#ifndef CLASSIFICATION_H
#define CLASSIFICATION_H

using namespace std;

//CLASS CLASSIFICATION
class Classification {
	
	private:
		
		//DECLARE PRIVATE VARIABLES
		vector<vector<double> > learning_data, learning_data_labels, data;
		unsigned int key;
	
		//VERIFY TABLES
		void verifyTable(Table& ld, Table& ldl, Table& d, unsigned int k);
		
		//EUCLIDEAN DISTANCE
		double euclidean(vector<double> &data_row, vector<double> &learning_data_row);
		
	public:
		
		//CONSTRUCTOR AND VERIFY TABLES
		Classification(Table& ld, Table& ldl, Table& d, unsigned int k);
		
		//DESTRUCTOR
		~Classification();
		
		//CLASSIFICATION TABLES
		vector<vector<double> > classificationTable();
		
		//ACCURACY TABLES
		double accuracy(vector<vector<double> > data_labels, vector<vector<double> > correct_data_labels);
};

#endif
