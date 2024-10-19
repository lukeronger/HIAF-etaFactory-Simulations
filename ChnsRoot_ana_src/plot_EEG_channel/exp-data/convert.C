void geneEposilon2(string filename){
	ifstream file(filename);
	filename += ".dat";
	ofstream fileout(filename);
	fileout.precision(10);
	fileout<<std::scientific;
	double xx1,xx2,yy1,yy2;
	while(file>>xx1>>yy1){
		file>>xx2>>yy2;
		fileout<<(xx1+xx2)/2.0<<" "<<(yy1+yy2)/2.0<<" ";
		fileout<<0<<" "<<fabs(yy1-yy2)/2.0<<endl;
	}
}

void geneEposilon2_2(string filename){
	ifstream file(filename);
	filename += ".dat";
	ofstream fileout(filename);
	fileout.precision(10);
	fileout<<std::scientific;
	double xx1,xx2,yy1,yy2;
	while(file>>xx1>>yy1){
		yy2 = 0.05;
		fileout<<xx1<<" "<<(yy1+yy2)/2.0<<" ";
		fileout<<0<<" "<<fabs(yy1-yy2)/2.0<<endl;
	}
}

void geneEposilon(string filename){
	ifstream file(filename);
	filename += ".dat";
	ofstream fileout(filename);
	fileout.precision(10);
	fileout<<std::scientific;
	double xx1,xx2,yy1,yy2;
	while(file>>xx1>>yy1){
		file>>xx2>>yy2;
		yy1 = yy1*yy1;
		yy2 = yy2*yy2;
		fileout<<(xx1+xx2)/2.0<<" "<<(yy1+yy2)/2.0<<" ";
		fileout<<0<<" "<<fabs(yy1-yy2)/2.0<<endl;
	}
}

void geneEposilon_2(string filename){
	ifstream file(filename);
	filename += ".dat";
	ofstream fileout(filename);
	fileout.precision(10);
	fileout<<std::scientific;
	double xx1,xx2,yy1,yy2;
	while(file>>xx1>>yy1){
		yy1 = yy1*yy1;
		yy2 = 0.05;
		fileout<<xx1<<" "<<(yy1+yy2)/2.0<<" ";
		fileout<<0<<" "<<fabs(yy1-yy2)/2.0<<endl;
	}
}









int convert(){
	geneEposilon2("epsilon2_E141.txt");
	geneEposilon2_2("epsilon2_KLOE2013.txt");
	geneEposilon2_2("epsilon2_KLOE2014.txt");
	geneEposilon2_2("epsilon2_A1.txt");
	geneEposilon2_2("epsilon2_HPS2015.txt");
	geneEposilon2_2("epsilon2_NA48_2.txt");
	geneEposilon2("epsilon2_NA64.txt");
	geneEposilon("epsilon_CHARM.txt");
	geneEposilon_2("epsilon_NA48_2.txt");
	geneEposilon("epsilon_NuCal.txt");



	return 0;
}


