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

	geneEposilon2("gu_CHARM.txt");
	geneEposilon2("gu_E787_949.txt");
	geneEposilon2("gu_SN1987A.txt");
	geneEposilon2_2("gu_BESIII.txt");
	geneEposilon2_2("gu_KLOE.txt");
	geneEposilon2_2("gu_MAMI.txt");
	geneEposilon2_2("gu_REDTOP.txt");

	return 0;
}


