#pragma once
#ifndef H_ADO_INC
#define H_ADO_INC

#include "stdafx.h"

struct Record {
	map<string, string> columns;
};

struct ResultSet {
	vector<Record> record;
};

class ADO {
private:

	string table;

	vector<string> line;

	// 记录表格的表头
	vector<string> header;

	ResultSet ret;

	ifstream in;
	ofstream out;
public:
	ADO();
	ADO(string table);
	bool openTable(string table);
	ResultSet selectByColumn(string column, string value);
	bool insert(Record r);
	bool update(Record r1, Record r2);
	bool delByColumn(string column, string value);
};

#endif